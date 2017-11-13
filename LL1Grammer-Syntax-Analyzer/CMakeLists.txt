cmake_minimum_required(VERSION 3.8)
project(LL1Grammer_Syntax_Analyzer)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES test.cpp util.cpp util.h type.h)
add_executable(LL1Grammer_Syntax_Analyzer ${SOURCE_FILES})