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
#include <vector>
#include <set>
#include <map>
#include <string>

extern "C" {
#include "dablooms.h"

#define CAPACITY 100000
#define ERROR_RATE .005

typedef struct instruction{
	void *inst;
	int line, tipo;
}Instruction;

typedef long long hrtime_t;
scaling_bloom_t *Rbloom;
scaling_bloom_t *Wbloom;
std::set<std::string> IMap;
//scaling_bloom_t *Ibloom;
int Rglobal_i = 0;
int Wglobal_i = 0;
int last = -1;
int lock = 0;

pthread_rwlock_t rwlock, Rbloomlock, Wbloomlock, bloomlock, imaplock;

int *vec = NULL;
std::vector<Instruction> instructions;
std::vector<Instruction> Winstructions;
//std::vector<int> instructionsIt;
std::map<void *, int> instructionsIt;
std::set<void *> added;

void check_and_insert_instruction(void *instr, int line, int tipo) {
	int i, n = instructions.size();
	Instruction temp;

	pthread_rwlock_wrlock(&rwlock);
	if(!added.count(instr)) {
		temp.inst = instr;
		temp.line = line;
		temp.tipo = tipo;
		if(tipo) {
			Winstructions.push_back(temp);
		}
		instructions.push_back(temp);
		added.insert(instr);
	}
	pthread_rwlock_unlock(&rwlock);

	return;
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
	int i, n = instructions.size();

	printf("\n\nBEGIN LISTA DE INSTRUCOES:\n");
	for(i=0;i<n;i++)
		printf("%p - %d - %d\n", instructions[i].inst, instructions[i].line, instructions[i].tipo);
	printf("END LISTA DE INSTRUCOES:\n\n");

	pthread_rwlock_destroy(&rwlock);
	pthread_rwlock_destroy(&imaplock);
	pthread_rwlock_destroy(&Rbloomlock);
	pthread_rwlock_destroy(&Wbloomlock);
	pthread_rwlock_destroy(&bloomlock);
  //fprintf(stderr, "outputEnd()\n");
	free_scaling_bloom(Rbloom);
	free_scaling_bloom(Wbloom);
	free(vec);
    timing = gethrcycle_x86() - timing;
    fprintf(stderr, "elapsed time: %f sec\n", timing*1.0/(getMHZ_x86()*1000000));
}

void llvm_start_memory_profiling() {
  //fprintf(stderr, "llvm_start_memory_profiling()\n");
	Rbloom = new_scaling_bloom(CAPACITY, ERROR_RATE, "./Rtestbloom.bin");
	Wbloom = new_scaling_bloom(CAPACITY, ERROR_RATE, "./Wtestbloom.bin");
	pthread_rwlock_init(&rwlock, NULL);
	pthread_rwlock_init(&imaplock, NULL);
	pthread_rwlock_init(&Rbloomlock, NULL);
	pthread_rwlock_init(&Wbloomlock, NULL);
	pthread_rwlock_init(&bloomlock, NULL);
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

void * get_pc () { return __builtin_return_address(0); }

void llvm_memory_profiling(void *addr, int index, int id, unsigned tipo, void *inst, int line) {
	char string[50];
	int elem, i;
	void *temp, *Lo, *Hi;
	int lastIndex;
	bool getLock, order;
	
	inst = __builtin_return_address(0);
	if(!added.count(inst)) {
		check_and_insert_instruction(inst, line, tipo);
	}
	//if(added.find(inst) == added.end()) check_and_insert_instruction(inst, line, tipo);
	//fprintf(stderr,"NEW CALL (%p %d %d %d %p %d)\n", addr, index, id, tipo, inst, line);

	//if(!instructionsIt.count(addr)) {
	//if(instructionsIt.find(addr) == instructionsIt.end()) {
		sprintf(string, "%p_%p", addr, inst);
		if(!tipo) {
			pthread_rwlock_rdlock(&Rbloomlock);
			if(!scaling_bloom_check(Rbloom, string, strlen(string))) {
				//fprintf(stderr,"READ in line %d in address %p in thread %d with index %d\n", line, addr, id, index);
				pthread_rwlock_unlock(&Rbloomlock);
				pthread_rwlock_wrlock(&Rbloomlock);
				scaling_bloom_add(Rbloom, string, strlen(string), Rglobal_i++);
			}
			pthread_rwlock_unlock(&Rbloomlock);
		}
		else {
			pthread_rwlock_rdlock(&Wbloomlock);
			if(!scaling_bloom_check(Wbloom, string, strlen(string))) {
				//fprintf(stderr,"WRITE in line %d in address %p in thread %d with index %d\n", line, addr, id, index);
				pthread_rwlock_unlock(&Wbloomlock);
				pthread_rwlock_wrlock(&Wbloomlock);
				scaling_bloom_add(Wbloom, string, strlen(string), Wglobal_i++);
			}
			pthread_rwlock_unlock(&Wbloomlock);
		}
	//}
	/*else {*/
		
		if(!tipo) {
			/*sprintf(string, "%p_%p", addr, inst);
			pthread_rwlock_wrlock(&bloomlock);
			if(!scaling_bloom_check(Rbloom, string, strlen(string))) {
				//fprintf(stderr,"READ in line %d in address %p in thread %d with index %d\n", line, addr, id, index);
				scaling_bloom_add(Rbloom, string, strlen(string), Rglobal_i++);
			}
			pthread_rwlock_unlock(&bloomlock);*/
			pthread_rwlock_rdlock(&rwlock);
			for(i=0;i<Winstructions.size();i++) {
				temp = Winstructions[i].inst;
				if(temp == inst || index == instructionsIt[addr]) {
					continue;
				}
			
				if(inst < temp) {
					Lo = inst;
					Hi = temp;
				}
				else {
					Lo = temp;
					Hi = inst;
				}

				sprintf(string, "%p_%p", Lo, Hi);
				pthread_rwlock_rdlock(&imaplock);
				if(!IMap.count(string)) {
					pthread_rwlock_unlock(&imaplock);
					sprintf(string, "%p_%p", addr, temp);
					pthread_rwlock_rdlock(&Wbloomlock);
					if(scaling_bloom_check(Wbloom, string, strlen(string))) {
						pthread_rwlock_unlock(&Wbloomlock);
						sprintf(string, "%p_%p", Lo, Hi);
						pthread_rwlock_wrlock(&imaplock);
						IMap.insert(string);
						pthread_rwlock_unlock(&imaplock);
						if(index > instructionsIt[addr]) {
							sprintf(string, "RAW");
							order = true;
						}
						else {
							sprintf(string, "WAR");
							order = false;
						}

						if(line == Winstructions[i].line) {
							fprintf(stderr,"%s in line %d in address %p\n", string, line, addr);
						}
						else {
							if(order)
								fprintf(stderr,"%s between lines %d and %d in address %p\n", string, line, Winstructions[i].line, addr);
							else
								fprintf(stderr,"%s between lines %d and %d in address %p\n", string, Winstructions[i].line, line, addr);
						}
					}
					else {
						pthread_rwlock_unlock(&Wbloomlock);						
					}
				}	
				else {
					pthread_rwlock_unlock(&imaplock);
				}
			}

			//pthread_rwlock_unlock(&rwlock);
			//pthread_rwlock_wrlock(&rwlock);
			//instructionsIt[addr] = index;
		}
		else {
			/*sprintf(string, "%p_%p", addr, inst);
			pthread_rwlock_wrlock(&bloomlock);
			if(!scaling_bloom_check(Wbloom, string, strlen(string))) {
				//fprintf(stderr,"WRITE in line %d in address %p in thread %d with index %d\n", line, addr, id, index);
				scaling_bloom_add(Wbloom, string, strlen(string), Wglobal_i++);
			}
			pthread_rwlock_unlock(&bloomlock);*/
			pthread_rwlock_rdlock(&rwlock);
			for(i=0;i<instructions.size();i++) {
				temp = instructions[i].inst;
				if(temp == inst || index == instructionsIt[addr]) {
					continue;
				}
				if(inst < temp) {
					Lo = inst;
					Hi = temp;
				}
				else {
					Lo = temp;
					Hi = inst;
				}
				sprintf(string, "%p_%p", Lo, Hi);
				pthread_rwlock_rdlock(&imaplock);
				if(!IMap.count(string)) {
					pthread_rwlock_unlock(&imaplock);
					sprintf(string, "%p_%p", addr, temp);
					pthread_rwlock_rdlock(&Rbloomlock);
					if(scaling_bloom_check(Rbloom, string, strlen(string))) {
						pthread_rwlock_unlock(&Rbloomlock);
						sprintf(string, "%p_%p", Lo, Hi);
						pthread_rwlock_wrlock(&imaplock);
						IMap.insert(string);
						pthread_rwlock_unlock(&imaplock);
						if(index > instructionsIt[addr]) {
							sprintf(string, "WAR");
							order = true;
						}
						else {
							sprintf(string, "RAW");
							order = false;
						}

						if(line == instructions[i].line) {
							fprintf(stderr,"%s in line %d in address %p\n", string, line, addr);
						}
						else {
							if(order)
								fprintf(stderr,"%s between lines %d and %d in address %p\n", string, line, instructions[i].line, addr);
							else
								fprintf(stderr,"%s between lines %d and %d in address %p\n", string, instructions[i].line, line, addr);
						}
					}
					else {
						pthread_rwlock_unlock(&Rbloomlock);
					}

					//fprintf(stderr,"CHECKW %s - %d\n", string, scaling_bloom_check(Wbloom, string, strlen(string)));
					pthread_rwlock_rdlock(&Wbloomlock);
					if(scaling_bloom_check(Wbloom, string, strlen(string))) {
						pthread_rwlock_unlock(&Wbloomlock);
						getLock = false;
						//fprintf(stderr,"WAW in (%p, %p)\n", inst, temp);
						if(line == instructions[i].line)
							fprintf(stderr,"WAW in line %d in address %p\n", line, addr);
						else
							fprintf(stderr,"WAW between lines %d and %d in address %p\n", line, instructions[i].line, addr);
					}
					else {
						pthread_rwlock_unlock(&Wbloomlock);
					}
				}
				else {
					pthread_rwlock_unlock(&imaplock);
				}
			}
			//pthread_rwlock_unlock(&rwlock);
			//pthread_rwlock_wrlock(&rwlock);
			//instructionsIt[addr] = index;
		}
		pthread_rwlock_unlock(&rwlock);
		pthread_rwlock_wrlock(&rwlock);
		instructionsIt[addr] = index;
		pthread_rwlock_unlock(&rwlock);
	//}
    
	//fprintf(stderr,"END CALL (%p %d %d %d %p %d)\n", addr, index, id, tipo, inst, line);

    //pthread_t ptid = pthread_self();
    //long int threadId = 0;
    //memcpy(&threadId, &ptid, min(sizeof(threadId), sizeof(ptid)));
//	fprintf(stderr, "ID da thread: %d - %d\n", threadId, id);
}

}

