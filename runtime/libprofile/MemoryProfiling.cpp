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
#include <sstream>
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>

extern "C" {
//#include "dablooms.h"

#define CAPACITY 100000
#define ERROR_RATE .05

typedef struct instruction{
	//void *inst;
	unsigned short line;//, tipo;
	unsigned short lastIt;
}Instruction;

typedef long long hrtime_t;
//scaling_bloom_t *Rbloom;
//scaling_bloom_t *Wbloom;
//std::set<std::string> IMap;
//std::map<void *, std::map<void *, char> > IMap;
std::map<void *, std::map<void *, bool> > IMap;
//scaling_bloom_t *Ibloom;
int Rglobal_i = 0;
int Wglobal_i = 0;
int last = -1;
int lock = 0;
bool clean = false;

pthread_rwlock_t rwlock, Rbloomlock, Wbloomlock, bloomlock, imaplock;

int *vec = NULL;
int *lastIt = NULL;
//std::map<void *, Instruction> instructions;
//std::map<void *, Instruction> Winstructions;
//std::vector<int> instructionsIt;
//std::map<void *, int> instructionsIt;
std::map<void *, std::map<void *, Instruction> > RinstructionsAddr;
std::map<void *, std::map<void *, Instruction> > WinstructionsAddr;
//std::map<void *, std::map<void *, Instruction> > instructionsAddr;
//std::set<void *> added;
//std::set<std::string> addedAddr;

/*void check_and_insert_instruction(void *instr, int line, int tipo) {
	Instruction temp;

	pthread_rwlock_wrlock(&rwlock);
	if(!added.count(instr)) {
		//temp.inst = instr;
		temp.line = line;
		//temp.tipo = tipo;
		if(tipo) {
			Winstructions[instr] = temp;
		}
		instructions[instr] = temp;
		added.insert(instr);
	}
	pthread_rwlock_unlock(&rwlock);

	return;
}*/

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
	//int i, n = instructions.size();
	//std::map<void *, Instruction>::iterator it;

	//printf("\n\nBEGIN LISTA DE INSTRUCOES:\n");
	//for(i=0;i<n;i++)
	//for(it = instructions.begin();it != instructions.end();++it)
	//	printf("%p - %d - %d\n", (it->second).inst, (it->second).line, (it->second).tipo);
	//printf("END LISTA DE INSTRUCOES:\n\n");

	pthread_rwlock_destroy(&rwlock);
	pthread_rwlock_destroy(&imaplock);
	pthread_rwlock_destroy(&Rbloomlock);
	pthread_rwlock_destroy(&Wbloomlock);
	pthread_rwlock_destroy(&bloomlock);
  //fprintf(stderr, "outputEnd()\n");
	//free_scaling_bloom(Rbloom);
	//free_scaling_bloom(Wbloom);
	free(vec);
	free(lastIt);
    timing = gethrcycle_x86() - timing;
    fprintf(stderr, "elapsed time: %f sec\n", timing*1.0/(getMHZ_x86()*1000000));
}

void llvm_start_memory_profiling() {
  //fprintf(stderr, "llvm_start_memory_profiling()\n");
	//Rbloom = new_scaling_bloom(CAPACITY, ERROR_RATE, "./Rtestbloom.bin");
	//Wbloom = new_scaling_bloom(CAPACITY, ERROR_RATE, "./Wtestbloom.bin");
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
	if(vec == NULL) {
		vec = (int *)malloc(size*sizeof(int));
		lastIt = (int *)malloc(size*sizeof(int));
	}

	return;
}

void setVec(int id, int val) {
	//vec[id] = val;
	//fprintf(stderr, "set vec[%d] = %d\n", id, val);
	return;
}

long int getVec(int id) {
	//return vec[id];
	return 0;
}

void * get_pc () { return __builtin_return_address(0); }

void clear_instrumentation () {
	/*if(!clean) {
		pthread_rwlock_wrlock(&bloomlock);
		if(!clean) {
			WinstructionsAddr.clear();
			//WinstructionsAddr = std::map<void *, std::map<void *, Instruction> >();
			//RinstructionsAddr = std::map<void *, std::map<void *, Instruction> >();
			RinstructionsAddr.clear();
			//IMap.clear();
			clean = true;
		}
		pthread_rwlock_unlock(&bloomlock);
	}*/
	return; 
}

void MemRead(void *addr, int index, int id, void *inst, int line) {
	Instruction instruc;
	bool first = false;

	//instruc.inst = inst;
	instruc.line = line;
	instruc.lastIt = index;
	//instruc.tipo = 0;

	//std::map<void *, std::map<void *, Instruction> >::iterator itWhoAdd = RinstructionsAddr.find(addr);


	//pthread_rwlock_rdlock(&Wbloomlock);
	std::map<void *, std::map<void *, Instruction> >::iterator itMap = WinstructionsAddr.find(addr);
	//pthread_rwlock_unlock(&Wbloomlock);

	if (itMap != WinstructionsAddr.end()) {
		std::map<void *, Instruction> mapThread = (*itMap).second;
		std::map<void *, Instruction>::iterator itMapThread;

		for (itMapThread = mapThread.begin(); itMapThread != mapThread.end(); ++itMapThread) {
			//if(lastIt[id] == index) continue;
			if((*itMapThread).second.lastIt == index) continue;
			if(IMap[inst][(*itMapThread).first] != true) {
				pthread_rwlock_wrlock(&imaplock);
				if(IMap[inst][(*itMapThread).first] != true) {
					IMap[inst][(*itMapThread).first] = true;
					IMap[(*itMapThread).first][inst] = true;
					//fprintf(stderr,"RAW between lines %d and %d in address %p\n", line, (*itMapThread).second.line, addr);
					if(index > (*itMapThread).second.lastIt) {
						fprintf(stderr,"RAW between instructions %p:%d and %p:%d in address %p\n", inst, line, (*itMapThread).first, (*itMapThread).second.line, addr);
					}
					else {
						fprintf(stderr,"WAR between instructions %p:%d and %p:%d in address %p\n", (*itMapThread).first, (*itMapThread).second.line, inst, line, addr);
					}
				}
				pthread_rwlock_unlock(&imaplock);
			}
		}
	}


	if (RinstructionsAddr.find(addr) == RinstructionsAddr.end()) {
		pthread_rwlock_wrlock(&Rbloomlock);
		if (RinstructionsAddr.find(addr) == RinstructionsAddr.end()) {
			std::map<void *, Instruction> auxMap;
			auxMap.insert(std::pair<void *, Instruction>(inst, instruc));
			RinstructionsAddr.insert(std::pair<void *, std::map<void *, Instruction> >(addr, auxMap));		
		}
		pthread_rwlock_unlock(&Rbloomlock);
	}
	else {
		
		if (!(*(RinstructionsAddr.find(addr))).second.count(inst)) {
			pthread_rwlock_wrlock(&Rbloomlock);
			(*(RinstructionsAddr.find(addr))).second.insert(std::pair<void *, Instruction>(inst, instruc));
			pthread_rwlock_unlock(&Rbloomlock);
		}
		else RinstructionsAddr[addr][inst].lastIt = index;
	}	

	return;
}

void MemWrite(void *addr, int index, int id, void *inst, int line) {
	Instruction instruc;

	//instruc.inst = inst;
	instruc.line = line;
	instruc.lastIt = index;
	//instruc.tipo = 0;

	//std::map<void *, std::map<void *, Instruction> >::iterator itWhoAdd = WinstructionsAddr.find(addr);


	//pthread_rwlock_rdlock(&Rbloomlock);
	std::map<void *, std::map<void *, Instruction> >::iterator itMap = RinstructionsAddr.find(addr);
	//pthread_rwlock_unlock(&Rbloomlock);

	if (itMap != RinstructionsAddr.end()) {
		std::map<void *, Instruction> mapThread = (*itMap).second;
		std::map<void *, Instruction>::iterator itMapThread;

		for (itMapThread = mapThread.begin(); itMapThread != mapThread.end(); ++itMapThread) {
			//if(lastIt[id] == index) continue;
			if((*itMapThread).second.lastIt == index) continue;
			if(IMap[inst][(*itMapThread).first] != true) {
				pthread_rwlock_wrlock(&imaplock);
				if(IMap[inst][(*itMapThread).first] != true) {
					IMap[inst][(*itMapThread).first] = true;
					IMap[(*itMapThread).first][inst] = true;
//					fprintf(stderr,"WAR between lines %d and %d in address %p\n", line, (*itMapThread).second.line, addr);
					//fprintf(stderr,"WAR between instructions %p:%d and %p:%d in address %p\n", inst, line, (*itMapThread).first, (*itMapThread).second.line, addr);
					if(index > (*itMapThread).second.lastIt) {
						fprintf(stderr,"WAR between instructions %p:%d and %p:%d in address %p\n", inst, line, (*itMapThread).first, (*itMapThread).second.line, addr);
					}
					else {
						fprintf(stderr,"RAW between instructions %p:%d and %p:%d in address %p\n", (*itMapThread).first, (*itMapThread).second.line, inst, line, addr);
					}
				}
				pthread_rwlock_unlock(&imaplock);
			}
		}
	}

	//pthread_rwlock_rdlock(&Wbloomlock);
	itMap = WinstructionsAddr.find(addr);
	//pthread_rwlock_unlock(&Wbloomlock);

	if (itMap != WinstructionsAddr.end()) {
		std::map<void *, Instruction> mapThread = (*itMap).second;
		std::map<void *, Instruction>::iterator itMapThread;

		for (itMapThread = mapThread.begin(); itMapThread != mapThread.end(); ++itMapThread) {
			if((*itMapThread).second.lastIt == index) continue;
			if(IMap[inst][(*itMapThread).first] != true) {
				pthread_rwlock_wrlock(&imaplock);
				if(IMap[inst][(*itMapThread).first] != true) {
					IMap[inst][(*itMapThread).first] = true;
					IMap[(*itMapThread).first][inst] = true;
					fprintf(stderr,"WAW between instructions %p:%d and %p:%d in address %p\n", inst, line, (*itMapThread).first, (*itMapThread).second.line, addr);
				}
				pthread_rwlock_unlock(&imaplock);
			}
		}
	}
	
	if (WinstructionsAddr.find(addr) == WinstructionsAddr.end()) {
		pthread_rwlock_wrlock(&Wbloomlock);
		if (WinstructionsAddr.find(addr) == WinstructionsAddr.end()) {
			std::map<void *, Instruction> auxMap;
			auxMap.insert(std::pair<void *, Instruction>(inst, instruc));
			WinstructionsAddr.insert(std::pair<void *, std::map<void *, Instruction> >(addr, auxMap));		
		}
		pthread_rwlock_unlock(&Wbloomlock);
	}
	else {
		if (!(*(WinstructionsAddr.find(addr))).second.count(inst)) {
			pthread_rwlock_wrlock(&Wbloomlock);
			(*(WinstructionsAddr.find(addr))).second.insert(std::pair<void *, Instruction>(inst, instruc));
			pthread_rwlock_unlock(&Wbloomlock);
		}
		else WinstructionsAddr[addr][inst].lastIt = index;
	}

	return;
}

void llvm_memory_profiling(void *addr, int index, int id, unsigned tipo, void *inst, int line) {
	//char string[50] = "0xfakdkaasd_0xajd234h";
	//int elem, i;
	//void *temp, *Lo, *Hi;
	//bool getLock, order;
	//Instruction Tinst;
	//Instruction instruc;
	//std::map<void *, Instruction>::iterator it;
	//std::pair<void *, void*> p;
	
	inst = __builtin_return_address(0);
	//instruc.inst = inst;
	//instruc.line = line;
	//instruc.tipo = tipo;

	//clean = false;

	//if(!added.count(inst)) {
	//	check_and_insert_instruction(inst, line, tipo);
	//}

	//if(added.find(inst) == added.end()) check_and_insert_instruction(inst, line, tipo);
	//fprintf(stderr,"NEW CALL (%p %d %d %d %p %d)\n", addr, index, id, tipo, inst, line);

	//if(!instructionsIt.count(addr)) {
	//if(instructionsIt.find(addr) == instructionsIt.end()) {
		/*sprintf(string, "%p_%p", addr, inst);
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
		}*/
	//}
	/*else {*/
		//sprintf(string, "%p_%p", addr, inst);
		//p = std::make_pair(addr, inst);
		/*if(!addedAddr.count(string)) {
			pthread_rwlock_wrlock(&bloomlock);
			if(!addedAddr.count(string)) {
				RinstructionsAddr[addr][inst] = (instruc);
				addedAddr.insert(string);
			}
			pthread_rwlock_unlock(&bloomlock);
		}
		else {
			if(!addedAddr[addr].count(inst)) {
				pthread_rwlock_wrlock(&bloomlock);
				if(!addedAddr[addr].count(inst)) {
					instructionsAddr[addr][inst] = (instruc);
					addedAddr[addr].insert(inst);
				}
				pthread_rwlock_unlock(&bloomlock);
			}
		}*/

		if(!tipo) {
			MemRead(addr, index, id, inst, line);
			/*pthread_rwlock_rdlock(&Wbloomlock);
			std::map<void *, std::map<void *, Instruction> >::iterator itMap = WinstructionsAddr.find(addr);
			if(itMap != WinstructionsAddr.end()) {
				for(it = (*itMap).second.begin();it != (*itMap).second.end();++it) {
					Tinst = it->second;
					if(Tinst.inst == inst || index == instructionsIt[addr]) {
						continue;
					}

					getLock = false;
					if(!IMap.count(inst) || !IMap[inst].count(Tinst.inst)) {
						pthread_rwlock_wrlock(&imaplock);
						if(!IMap.count(inst) || !IMap[inst].count(Tinst.inst)) {
							IMap[inst][Tinst.inst] = 't';
							IMap[Tinst.inst][inst] = 't';
							getLock = true;
						}
						pthread_rwlock_unlock(&imaplock);
						if(getLock) {
							if(index > instructionsIt[addr]) {
								sprintf(string, "RAW");
								order = true;
							}
							else {
								sprintf(string, "WAR");
								order = false;
							}

							if(line == Tinst.line) {
								fprintf(stderr,"%s in line %d in address %p\n", string, line, addr);
							}
							else {
								if(order)
									fprintf(stderr,"%s between lines %d and %d in address %p\n", string, line, Tinst.line, addr);
								else
									fprintf(stderr,"%s between lines %d and %d in address %p\n", string, Tinst.line, line, addr);
							}
						}
					}
				}
			}
			pthread_rwlock_unlock(&Wbloomlock);
			
			if(!RinstructionsAddr.count(addr) || !RinstructionsAddr[addr].count(inst)) {
				pthread_rwlock_wrlock(&Rbloomlock);
				if(!RinstructionsAddr.count(addr) || !RinstructionsAddr[addr].count(inst)) {
					RinstructionsAddr[addr][inst] = instruc;
				}
				pthread_rwlock_unlock(&Rbloomlock);
			}*/
		}
		else {
			MemWrite(addr, index, id, inst, line);			
			/*pthread_rwlock_rdlock(&Rbloomlock);
			std::map<void *, std::map<void *, Instruction> >::iterator itMap = RinstructionsAddr.find(addr);
			if(itMap != RinstructionsAddr.end()) {
				for(it = (*itMap).second.begin();it != (*itMap).second.end();++it) {
					Tinst = it->second;
					if(Tinst.inst == inst || index == instructionsIt[addr]) {
						continue;
					}

					getLock = false;
					if(!IMap.count(inst) || !IMap[inst].count(Tinst.inst)) {
						pthread_rwlock_wrlock(&imaplock);
						if(!IMap.count(inst) || !IMap[inst].count(Tinst.inst)) {
							IMap[inst][Tinst.inst] = 't';
							IMap[Tinst.inst][inst] = 't';
							getLock = true;
						}
						pthread_rwlock_unlock(&imaplock);
			
						if(getLock) {
							if(index > instructionsIt[addr]) {
								sprintf(string, "WAR");
								order = true;
							}
							else {
								sprintf(string, "RAW");
								order = false;
							}

							if(line == Tinst.line) {
								fprintf(stderr,"%s in line %d in address %p\n", string, line, addr);
							}
							else {
								if(order)
									fprintf(stderr,"%s between lines %d and %d in address %p\n", string, line, Tinst.line, addr);
								else
									fprintf(stderr,"%s between lines %d and %d in address %p\n", string, Tinst.line, line, addr);
							}
						}
					}
				}
			}
			pthread_rwlock_unlock(&Rbloomlock);

			pthread_rwlock_rdlock(&Wbloomlock);
			itMap = WinstructionsAddr.find(addr);
			if(itMap != WinstructionsAddr.end()) {
				for(it = (*itMap).second.begin();it != (*itMap).second.end();++it) {
					Tinst = it->second;
					if(Tinst.inst == inst || index == instructionsIt[addr]) {
						continue;
					}

					getLock = false;
					if(!IMap.count(inst) || !IMap[inst].count(Tinst.inst)) {
						pthread_rwlock_wrlock(&imaplock);
						if(!IMap.count(inst) || !IMap[inst].count(Tinst.inst)) {
							IMap[inst][Tinst.inst] = 't';
							IMap[Tinst.inst][inst] = 't';
							getLock = true;
						}
						pthread_rwlock_unlock(&imaplock);
						if(getLock) {
							if(line == Tinst.line)
								fprintf(stderr,"WAW in line %d in address %p\n", line, addr);
							else
								fprintf(stderr,"WAW between lines %d and %d in address %p\n", line, Tinst.line, addr);
						}
					}
				}
			}
			pthread_rwlock_unlock(&Wbloomlock);

			if(!WinstructionsAddr.count(addr) || !WinstructionsAddr[addr].count(inst)) {
				pthread_rwlock_wrlock(&Wbloomlock);
				if(!WinstructionsAddr.count(addr) || !WinstructionsAddr[addr].count(inst)) {
					WinstructionsAddr[addr][inst] = instruc;
				}
				pthread_rwlock_unlock(&Wbloomlock);
			}
		}
		
		pthread_rwlock_wrlock(&rwlock);
		instructionsIt[addr] = index;
		pthread_rwlock_unlock(&rwlock);*/
	}
	lastIt[id] = index;
	//fprintf(stderr,"END CALL (%p %d %d %d %p %d)\n", addr, index, id, tipo, inst, line);

    //pthread_t ptid = pthread_self();
    //long int threadId = 0;
    //memcpy(&threadId, &ptid, min(sizeof(threadId), sizeof(ptid)));
//	fprintf(stderr, "ID da thread: %d - %d\n", threadId, id);
}

}

