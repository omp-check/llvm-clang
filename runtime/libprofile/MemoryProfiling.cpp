#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <pthread.h>
#include <sstream>
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>

extern "C" {

typedef struct instruction{
	unsigned short line;
	int lastIt;
}Instruction;

typedef long long hrtime_t;
std::map<void *, std::map<void *, bool> > IMap;
int Rglobal_i = 0;
int Wglobal_i = 0;
int last = -1;
int lock = 0;
bool clean = false;

pthread_mutex_t rwlock, Rbloomlock, Wbloomlock, bloomlock, imaplock;

int *vec = NULL;
std::map<void *, std::map<void *, Instruction> > RinstructionsAddr;
std::map<void *, std::map<void *, Instruction> > WinstructionsAddr;

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

	pthread_mutex_destroy(&rwlock);
	pthread_mutex_destroy(&imaplock);
	pthread_mutex_destroy(&Rbloomlock);
	pthread_mutex_destroy(&Wbloomlock);
	pthread_mutex_destroy(&bloomlock);
	free(vec);
    timing = gethrcycle_x86() - timing;
    fprintf(stderr, "elapsed time: %f sec\n", timing*1.0/(getMHZ_x86()*1000000));
}

void llvm_start_memory_profiling() {
	pthread_mutex_init(&rwlock, NULL);
	pthread_mutex_init(&imaplock, NULL);
	pthread_mutex_init(&Rbloomlock, NULL);
	pthread_mutex_init(&Wbloomlock, NULL);
	pthread_mutex_init(&bloomlock, NULL);
    timing = gethrcycle_x86();
    atexit(outputEnd);
}

long int min(long int a, long int b)
{
	if (a<b) return a;
	else return b;

}

void alloca_vec(int size) {
	if(vec == NULL) {
		vec = (int *)malloc(size*sizeof(int));
	}

	return;
}

void setVec(int id, int val) {
	vec[id] = val;
	return;
}

long int getVec(int id) {
	return vec[id];
}

void * get_pc () { return __builtin_return_address(0); }

void clear_instrumentation () {
	/*if(!clean) {
		pthread_mutex_wrlock(&bloomlock);
		if(!clean) {
			WinstructionsAddr.clear();
			//WinstructionsAddr = std::map<void *, std::map<void *, Instruction> >();
			//RinstructionsAddr = std::map<void *, std::map<void *, Instruction> >();
			RinstructionsAddr.clear();
			//IMap.clear();
			clean = true;
		}
		pthread_mutex_unlock(&bloomlock);
	}*/
	return; 
}

void MemRead(void *addr, int index, int id, void *inst, int line) {
	Instruction instruc;

	instruc.line = line;
	instruc.lastIt = index;

	std::map<void *, std::map<void *, Instruction> >::iterator itMap = WinstructionsAddr.find(addr);

	if (itMap != WinstructionsAddr.end()) {
		std::map<void *, Instruction> mapThread = (*itMap).second;
		std::map<void *, Instruction>::iterator itMapThread;

		for (itMapThread = mapThread.begin(); itMapThread != mapThread.end(); ++itMapThread) {
			if((*itMapThread).second.lastIt == index) continue;
			if(IMap[inst][(*itMapThread).first] != true) {
				pthread_mutex_lock(&imaplock);
				if(IMap[inst][(*itMapThread).first] != true) {
					IMap[inst][(*itMapThread).first] = true;
					IMap[(*itMapThread).first][inst] = true;
					if(index > (*itMapThread).second.lastIt) {
						fprintf(stderr,"RAW between instructions %p:%d and %p:%d in address %p\n", inst, line, (*itMapThread).first, (*itMapThread).second.line, addr);
					}
					else {
						fprintf(stderr,"WAR between instructions %p:%d and %p:%d in address %p\n", (*itMapThread).first, (*itMapThread).second.line, inst, line, addr);
					}
				}
				pthread_mutex_unlock(&imaplock);
			}
		}
	}


	if (RinstructionsAddr.find(addr) == RinstructionsAddr.end()) {
		pthread_mutex_lock(&Rbloomlock);
		if (RinstructionsAddr.find(addr) == RinstructionsAddr.end()) {
			std::map<void *, Instruction> auxMap;
			auxMap.insert(std::pair<void *, Instruction>(inst, instruc));
			RinstructionsAddr.insert(std::pair<void *, std::map<void *, Instruction> >(addr, auxMap));		
		}
		pthread_mutex_unlock(&Rbloomlock);
	}
	else {
		
		if (!(*(RinstructionsAddr.find(addr))).second.count(inst)) {
			pthread_mutex_lock(&Rbloomlock);
			(*(RinstructionsAddr.find(addr))).second.insert(std::pair<void *, Instruction>(inst, instruc));
			pthread_mutex_unlock(&Rbloomlock);
		}
		else RinstructionsAddr[addr][inst].lastIt = index;
	}	

	return;
}

void MemWrite(void *addr, int index, int id, void *inst, int line) {
	Instruction instruc;

	instruc.line = line;
	instruc.lastIt = index;

	std::map<void *, std::map<void *, Instruction> >::iterator itMap = RinstructionsAddr.find(addr);

	if (itMap != RinstructionsAddr.end()) {
		std::map<void *, Instruction> mapThread = (*itMap).second;
		std::map<void *, Instruction>::iterator itMapThread;

		for (itMapThread = mapThread.begin(); itMapThread != mapThread.end(); ++itMapThread) {
			if((*itMapThread).second.lastIt == index) continue;
			if(IMap[inst][(*itMapThread).first] != true) {
				pthread_mutex_lock(&imaplock);
				if(IMap[inst][(*itMapThread).first] != true) {
					IMap[inst][(*itMapThread).first] = true;
					IMap[(*itMapThread).first][inst] = true;
					if(index > (*itMapThread).second.lastIt) {
						fprintf(stderr,"WAR between instructions %p:%d and %p:%d in address %p\n", inst, line, (*itMapThread).first, (*itMapThread).second.line, addr);
					}
					else {
						fprintf(stderr,"RAW between instructions %p:%d and %p:%d in address %p\n", (*itMapThread).first, (*itMapThread).second.line, inst, line, addr);
					}
				}
				pthread_mutex_unlock(&imaplock);
			}
		}
	}

	itMap = WinstructionsAddr.find(addr);

	if (itMap != WinstructionsAddr.end()) {
		std::map<void *, Instruction> mapThread = (*itMap).second;
		std::map<void *, Instruction>::iterator itMapThread;

		for (itMapThread = mapThread.begin(); itMapThread != mapThread.end(); ++itMapThread) {
			if((*itMapThread).second.lastIt == index) continue;
			if(IMap[inst][(*itMapThread).first] != true) {
				pthread_mutex_lock(&imaplock);
				if(IMap[inst][(*itMapThread).first] != true) {
					IMap[inst][(*itMapThread).first] = true;
					IMap[(*itMapThread).first][inst] = true;
					fprintf(stderr,"WAW between instructions %p:%d and %p:%d in address %p\n", inst, line, (*itMapThread).first, (*itMapThread).second.line, addr);
				}
				pthread_mutex_unlock(&imaplock);
			}
		}
	}
	
	if (WinstructionsAddr.find(addr) == WinstructionsAddr.end()) {
		pthread_mutex_lock(&Wbloomlock);
		if (WinstructionsAddr.find(addr) == WinstructionsAddr.end()) {
			std::map<void *, Instruction> auxMap;
			auxMap.insert(std::pair<void *, Instruction>(inst, instruc));
			WinstructionsAddr.insert(std::pair<void *, std::map<void *, Instruction> >(addr, auxMap));		
		}
		pthread_mutex_unlock(&Wbloomlock);
	}
	else {
		if (!(*(WinstructionsAddr.find(addr))).second.count(inst)) {
			pthread_mutex_lock(&Wbloomlock);
			(*(WinstructionsAddr.find(addr))).second.insert(std::pair<void *, Instruction>(inst, instruc));
			pthread_mutex_unlock(&Wbloomlock);
		}
		else WinstructionsAddr[addr][inst].lastIt = index;
	}

	return;
}

void llvm_memory_profiling(void *addr, int index, int id, unsigned tipo, void *inst, int line) {
	
	inst = __builtin_return_address(0);

	if(!tipo) {
		MemRead(addr, index, id, inst, line);
	}
	else {
		MemWrite(addr, index, id, inst, line);			
	}

	return;
}

}

