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

typedef long long hrtime_t;
scaling_bloom_t *bloom;
int i = 0;

int *vec = NULL;

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
  //fprintf(stderr, "outputEnd()\n");
	free_scaling_bloom(bloom);
	free(vec);
    timing = gethrcycle_x86() - timing;
    fprintf(stderr, "elapsed time: %f sec\n", timing*1.0/(getMHZ_x86()*1000000));
}

void llvm_start_memory_profiling() {
  //fprintf(stderr, "llvm_start_memory_profiling()\n");
	bloom = new_scaling_bloom(CAPACITY, ERROR_RATE, "./testbloom.bin");
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
	fprintf(stderr, "set vec[%d] = %d\n", id, val);
	return;
}

int getVec(int id) {
	return vec[id];
}

int * get_pc () { return __builtin_return_address(0); }

void llvm_memory_profiling(void *addr, int index, int id, unsigned tipo, void *inst) {
	char string[100];
	
//	strncpy(string, inst, 20);

/*  fprintf(stderr, "llvm_memory_profiling()\n");
    if (tipo==0) fprintf(stderr, "Load in %p in thread %d with iteration index %d\n", addr, id, index);
    else
        fprintf(stderr, "Store in %p in thread %d with iteration index %d\n", addr, id, index);*/

	fprintf(stderr, "(%p, %d, %d, %d, %p)\n", addr, index, id, tipo, inst);
	

//	sprintf(string, "%p_%d_%d_%p", addr, id, inst);
//	if(!scaling_bloom_check(bloom, string, strlen(string))) {
//		fprintf(stderr,"INSERTED: \"%s\"\n", string);
//		scaling_bloom_add(bloom, string, strlen(string), i++);
//	}
    
    pthread_t ptid = pthread_self();
    long int threadId = 0;
    memcpy(&threadId, &ptid, min(sizeof(threadId), sizeof(ptid)));
//	fprintf(stderr, "ID da thread: %d - %d\n", threadId, id);
}
