/*===-- EdgeProfiling.c - Support library for edge profiling --------------===*\
|*
|*                     The LLVM Compiler Infrastructure
|*
|* This file is distributed under the University of Illinois Open Source      
|* License. See LICENSE.TXT for details.                                      
|* 
|*===----------------------------------------------------------------------===*|
|* 
|* This file implements the call back routines for the edge profiling
|* instrumentation pass.  This should be used with the -insert-edge-profiling
|* LLVM pass.
|*
\*===----------------------------------------------------------------------===*/

#include "Profiling.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#include <pthread.h>
#include "dablooms.h"

#define CAPACITY 100000
#define ERROR_RATE .05

typedef struct instruction{
	void *inst;
	int line;
}Instruction;

typedef long long hrtime_t;
scaling_bloom_t *Rbloom;
scaling_bloom_t *Wbloom;
scaling_bloom_t *Ibloom;
int Rglobal_i = 0;
int Wglobal_i = 0;
int inst_i = 0;
int last = -1;
int lock = 0;

int *vec = NULL;
Instruction instructions[50];

int check_instruction(void *instr) {
	int i;

	for(i=0;i<last+1;i++) {
		if(instructions[i].inst == instr)
			return 1;
	}

	return 0;
}

void insert_instruction(void *instr, int line) {
	if(!lock) lock = 1;
	if(lock) {
		instructions[last+1].inst = instr;
		instructions[last+1].line = line;
		last++;
	}
	lock = 0;
}

/* get the number of CPU cycles per microsecond - from Linux /proc filesystem 
 * return<0 on error
 */
static double getMHZ_x86(void) {
    double mhz = -1;
    char line[1024], *s, search_str[] = "cpu MHz";
    FILE *fp; 
    
    /* open proc/cpuinfo */
    if ((fp = fopen("/proc/cpuinfo", "r")) == NULL)
	return -1;

    /* ignore all lines until we reach MHz information */
    while (fgets(line, 1024, fp) != NULL) { 
	if (strstr(line, search_str) != NULL) {
	    /* ignore all characters in line up to : */
	    for (s = line; *s && (*s != ':'); ++s);
	    /* get MHz number */
	    if (*s && (sscanf(s+1, "%lf", &mhz) == 1)) 
		break;
	}
    }

    if (fp!=NULL) fclose(fp);

    return mhz;
}

/* get the number of CPU cycles since startup */
static hrtime_t gethrcycle_x86(void) {
    unsigned int tmp[2];

    __asm__ ("rdtsc"
	     : "=a" (tmp[1]), "=d" (tmp[0])
	     : "c" (0x10) );
        
    return ( ((hrtime_t)tmp[0] << 32 | tmp[1]) );
}

static hrtime_t timing;

static void outputEnd() {
	int i;

	printf("\n\nBEGIN LISTA DE INSTRUCOES:\n");
	for(i=0;i<last+1;i++)
		printf("%p - %d\n", instructions[i].inst, instructions[i].line);
	printf("END LISTA DE INSTRUCOES:\n\n");

  //fprintf(stderr, "outputEnd()\n");
	free_scaling_bloom(Rbloom);
	free_scaling_bloom(Wbloom);
	free_scaling_bloom(Ibloom);
	free(vec);
    timing = gethrcycle_x86() - timing;
    fprintf(stderr, "elapsed time: %f sec\n", timing*1.0/(getMHZ_x86()*1000000));
}

void llvm_start_memory_profiling() {
  //fprintf(stderr, "llvm_start_memory_profiling()\n");
	Rbloom = new_scaling_bloom(CAPACITY, ERROR_RATE, "./testbloom.bin");
	Wbloom = new_scaling_bloom(CAPACITY, ERROR_RATE, "./testbloom.bin");
	Ibloom = new_scaling_bloom(CAPACITY, ERROR_RATE, "./testbloom.bin");
    timing = gethrcycle_x86();
    atexit(outputEnd);
}

long int min(long int a, long int b)
{
	if (a<b) return a;
	else return b;

}

void alloca_vec(int size) {
	if(vec == NULL)
		vec = (int *)malloc(size*sizeof(int));

	return;
}

void setVec(int id, int val) {
	vec[id] = val;
	//fprintf(stderr, "set vec[%d] = %d\n", id, val);
	return;
}

int getVec(int id) {
	return vec[id];
}

int * get_pc () { return __builtin_return_address(0); }

void llvm_memory_profiling(void *addr, int index, int id, unsigned tipo, void *inst, int line) {
	char string[50];
	int elem, i;
	void *temp, *Lo, *Hi;
	
/*  fprintf(stderr, "llvm_memory_profiling()\n");
    if (tipo==0) fprintf(stderr, "Load in %p in thread %d with iteration index %d\n", addr, id, index);
    else
        fprintf(stderr, "Store in %p in thread %d with iteration index %d\n", addr, id, index);*/

//	fprintf(stderr, "(%p, %d, %d, %d, %p)\n", addr, index, id, tipo, inst);
	
	elem = check_instruction(inst);

	if(!elem) {
		insert_instruction(inst, line);
	}

	if(!tipo) {
		for(i=0;i<last+1;i++) {
			temp = instructions[i].inst;
			if(temp == inst)
				continue;
			if(inst < temp) {
				Lo = inst;
				Hi = temp;
			}
			else {
				Lo = temp;
				Hi = inst;
			}
			sprintf(string, "%p_%p", Lo, Hi);
			if(!scaling_bloom_check(Ibloom, string, strlen(string))) {
				scaling_bloom_add(Ibloom, string, strlen(string), inst_i++);
				sprintf(string, "%p_%p", addr, temp);
				if(scaling_bloom_check(Wbloom, string, strlen(string))) {
					//fprintf(stderr,"RAW in (%p, %p)\n", inst, temp);
					if(line == instructions[i].line)
						fprintf(stderr,"RAW in line %d\n", line);
					else
						fprintf(stderr,"RAW between lines %d and %d\n", line, instructions[i].line);
				}
			}
		}
		sprintf(string, "%p_%p", addr, inst);
		if(!scaling_bloom_check(Rbloom, string, strlen(string))) {
	//		fprintf(stderr,"INSERTED READ: \"%s\"\n", string);
			scaling_bloom_add(Rbloom, string, strlen(string), Rglobal_i++);
		}
	}
	else {
		for(i=0;i<last+1;i++) {
			temp = instructions[i].inst;
			if(inst < temp) {
				Lo = inst;
				Hi = temp;
			}
			else {
				Lo = temp;
				Hi = inst;
			}
			sprintf(string, "%p_%p", Lo, Hi);
			if(!scaling_bloom_check(Ibloom, string, strlen(string))) {
				scaling_bloom_add(Ibloom, string, strlen(string), inst_i++);
				sprintf(string, "%p_%p", addr, temp);
				if(scaling_bloom_check(Rbloom, string, strlen(string))) {
//					fprintf(stderr,"WAR in (%p, %p)\n", inst, temp);
					if(line == instructions[i].line)
						fprintf(stderr,"WAR in line %d\n", line);
					else
						fprintf(stderr,"WAR between lines %d and %d\n", line, instructions[i].line);
				}
				if(scaling_bloom_check(Wbloom, string, strlen(string))) {
					//fprintf(stderr,"WAW in (%p, %p)\n", inst, temp);
					if(line == instructions[i].line)
						fprintf(stderr,"WAW in line %d\n", line);
					else
						fprintf(stderr,"WAW between lines %d and %d\n", line, instructions[i].line);
				}
			}
		}
		sprintf(string, "%p_%p", addr, inst);
		if(!scaling_bloom_check(Wbloom, string, strlen(string))) {
		//	fprintf(stderr,"INSERTED WRITE: \"%s\"\n", string);
			scaling_bloom_add(Wbloom, string, strlen(string), Wglobal_i++);
		}
	}
    
    pthread_t ptid = pthread_self();
    long int threadId = 0;
    memcpy(&threadId, &ptid, min(sizeof(threadId), sizeof(ptid)));
//	fprintf(stderr, "ID da thread: %d - %d\n", threadId, id);
}
