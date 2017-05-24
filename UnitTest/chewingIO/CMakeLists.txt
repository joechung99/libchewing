cmake_minimum_required(VERSION 2.6)

project(testchewingIO)

SET(GCC_COVERAGE_COMPILE_FLAGS "-fprofile-arcs -ftest-coverage")
SET(GCC_COVERAGE_LINK_FLAGS    "-lgcov")

SET( CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}" )
SET( CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${GCC_COVERAGE_LINK_FLAGS}" )


find_package(PkgConfig)
find_package(GTest REQUIRED)
pkg_check_modules(CHEWING REQUIRED chewing)
include_directories(${CHEWING_INCLUDE_DIRS} ${GTEST_INCLUDE_DIRS})
link_directories(${CHEWING_LIBRARY_DIRS})



add_executable(testchewingIO testchewingIO.cpp)
target_link_libraries(testchewingIO ${CHEWING_LIBRARIES} ${GTEST_LIBRARIES} pthread)


