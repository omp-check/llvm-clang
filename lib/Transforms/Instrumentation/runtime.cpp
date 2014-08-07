
#include <cstdio>
#include <cstdint>

using namespace std;

extern "C" {

// This macro allows us to prefix strings so that they are less likely to
// conflict with existing symbol names in the examined programs.
// e.g. DEP(load) yields DePpRoF_load
#define DEP(X)  DePpRoF_ ## X


void
DEP(load)(uint8_t *ptr, uint64_t size) {
  printf("Load\n");
}


void
DEP(store)(uint8_t *ptr, uint64_t size) {
  printf("Store\n");
}


void
DEP(funEntry)(uint8_t *ptr) {
  printf("FEnter\n");
}


void
DEP(funExit)() {
  printf("FExit\n");
}


void
DEP(loopEntry)() {
  printf("LEnter\n");
}


void
DEP(loopExit)() {
  printf("LExit\n");
}


void
DEP(loopLatch)() {
  printf("LLatch\n");
}


}

