project(SAMPLE)
cmake_minimum_required(VERSION 2.8)

set(PACKAGE_NAME SAMPLE)
set(PACKAGE_VERSION x.xx)
set(PACKAGE_STRING "${PACKAGE_NAME} ${PACKAGE_VERSION}")
set(PACKAGE_BUGREPORT "bugs@yourdomain")

set (CMAKE_BUILD_TYPE Debug)

# A bit of a sanity check:
if( NOT EXISTS ${LLVM_ROOT}/include/llvm )
message(FATAL_ERROR "LLVM_ROOT (${LLVM_ROOT}) is not a valid LLVM install")
endif()

# We incorporate the CMake features provided by LLVM:
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${LLVM_ROOT}/share/llvm/cmake")
include(LLVMConfig)
include(AddLLVM)

set(CMAKE_CXX_FLAGS "-std=c++11 -fno-rtti")
option(LLVM_ENABLE_CXX11  "Enable C++11" ON)
option(LLVM_INCLUDE_TOOLS "Generate build targets for the LLVM tools." ON)
option(LLVM_BUILD_TOOLS
  "Build the LLVM tools. If OFF, just generate build targets." ON)

# Now set the LLVM header and library paths:
add_definitions( ${LLVM_DEFINITIONS} )
include_directories( ${LLVM_INCLUDE_DIRS} )
link_directories( ${LLVM_LIBRARY_DIRS} )

# And the project header and library paths
include_directories(${CMAKE_SOURCE_DIR}/include)
link_directories( ${LIBRARY_OUTPUT_PATH} )
set(CMAKE_TEMP_LIBRARY_PATH "${PROJECT_BINARY_DIR}/lib")
message(STATUS ${CMAKE_TEMP_LIBRARY_PATH})

add_subdirectory(lib)
add_subdirectory(tools)

