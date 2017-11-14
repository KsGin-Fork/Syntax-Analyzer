cmake_minimum_required(VERSION 3.8)
project(LR0Grammar_Syntax_Analyzer)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES test.cpp util.cpp util.h type.h)
add_executable(LR0Grammar_Syntax_Analyzer ${SOURCE_FILES})