cmake_minimum_required(VERSION 3.24.2.0)
project(CMAKE_TRY_COMPILE CXX)
set_property(DIRECTORY PROPERTY INCLUDE_DIRECTORIES "")
set(CMAKE_VERBOSE_MAKEFILE 1)
set(CMAKE_CXX_FLAGS "")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${COMPILE_DEFINITIONS}")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_EXE_LINKER_FLAGS "")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${EXE_LINKER_FLAGS}")
include_directories(${INCLUDE_DIRECTORIES})
set(CMAKE_SUPPRESS_REGENERATION 1)
link_directories(${LINK_DIRECTORIES})
add_definitions([==[-v]==])
cmake_policy(SET CMP0065 NEW)
cmake_policy(SET CMP0083 NEW)
include("${CMAKE_ROOT}/Modules/Internal/HeaderpadWorkaround.cmake")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "C:/Users/kenny/OneDrive/Escritorio/parcial1/untitled6/cmake-build-debug/CMakeFiles/CMakeTmp")
add_executable(cmTC_875c1 "C:/Program Files/JetBrains/CLion 2022.3.2/bin/cmake/win/x64/share/cmake-3.24/Modules/CMakeCXXCompilerABI.cpp")
target_link_libraries(cmTC_875c1 ${LINK_LIBRARIES})
