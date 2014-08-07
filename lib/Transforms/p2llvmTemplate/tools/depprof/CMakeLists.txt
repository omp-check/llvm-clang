set(LLVM_USED_LIBS prof-inst)

configure_file("${CMAKE_CURRENT_SOURCE_DIR}/config.h.cmake" 
               "${CMAKE_CURRENT_BINARY_DIR}/config.h" @ONLY)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_executable(depprof
  main.cpp
  )

# asmparser core linker bitreader bitwriter irreader ipo scalaropts analysis target mc x86 arm powerpc support

target_link_libraries(depprof prof-inst
#LLVMPowerPCCodeGen LLVMPowerPCAsmParser LLVMPowerPCDesc LLVMPowerPCInfo LLVMPowerPCAsmPrinter
# libLLVMARMCodeGen LLVMARMAsmParser libLLVMARMDesc libLLVMARMInfo libLLVMARMAsmPrinter
#LLVMX86AsmParser LLVMX86Desc LLVMX86CodeGen 
LLVMSelectionDAG LLVMAsmPrinter LLVMMCParser LLVMCodeGen 
#LLVMX86AsmPrinter LLVMX86Info  LLVMX86Utils
LLVMipo
LLVMVectorize LLVMScalarOpts LLVMInstCombine LLVMIRReader
LLVMBitWriter LLVMBitReader LLVMLinker LLVMTransformUtils LLVMipa 
LLVMAnalysis LLVMTarget LLVMMC LLVMMCParser LLVMObject
LLVMAsmParser LLVMCore LLVMSupport)

# Platform dependencies.
if( WIN32 )
  target_link_libraries(depprof
    shlwapi
  )
else()
  target_link_libraries(depprof
    pthread
    dl
    curses
  )
endif()

set_target_properties(depprof
                      PROPERTIES
                      LINKER_LANGUAGE CXX
                      PREFIX "")

install(TARGETS depprof
  RUNTIME DESTINATION bin)
