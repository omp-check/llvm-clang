##===- projects/sample/tools/depprof/Makefile ---------------*- Makefile -*-===##

#
# Indicate where we are relative to the top of the source tree.
#
LEVEL=../..

#
# Give the name of the tool.
#
TOOLNAME=depprof

#
# List libraries that we'll need
#
USEDLIBS = prof-inst.a

CPPFLAGS += -std=c++11

LINK_COMPONENTS = asmparser core linker bitreader bitwriter irreader ipo scalaropts analysis target mc support

#
# Include Makefile.common so we know what to do.
#
include $(LEVEL)/Makefile.common

