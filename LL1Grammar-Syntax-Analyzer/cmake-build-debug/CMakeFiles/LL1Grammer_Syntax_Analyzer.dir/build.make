# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/KsGin/Documents/Compilers/Syntax-Analyzer/LL1Grammar-Syntax-Analyzer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/KsGin/Documents/Compilers/Syntax-Analyzer/LL1Grammar-Syntax-Analyzer/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/flags.make

CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/test.cpp.o: CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/flags.make
CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/test.cpp.o: ../test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/KsGin/Documents/Compilers/Syntax-Analyzer/LL1Grammar-Syntax-Analyzer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/test.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/test.cpp.o -c /Users/KsGin/Documents/Compilers/Syntax-Analyzer/LL1Grammar-Syntax-Analyzer/test.cpp

CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/test.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/KsGin/Documents/Compilers/Syntax-Analyzer/LL1Grammar-Syntax-Analyzer/test.cpp > CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/test.cpp.i

CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/test.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/KsGin/Documents/Compilers/Syntax-Analyzer/LL1Grammar-Syntax-Analyzer/test.cpp -o CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/test.cpp.s

CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/test.cpp.o.requires:

.PHONY : CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/test.cpp.o.requires

CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/test.cpp.o.provides: CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/test.cpp.o.requires
	$(MAKE) -f CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/build.make CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/test.cpp.o.provides.build
.PHONY : CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/test.cpp.o.provides

CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/test.cpp.o.provides.build: CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/test.cpp.o


CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/util.cpp.o: CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/flags.make
CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/util.cpp.o: ../util.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/KsGin/Documents/Compilers/Syntax-Analyzer/LL1Grammar-Syntax-Analyzer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/util.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/util.cpp.o -c /Users/KsGin/Documents/Compilers/Syntax-Analyzer/LL1Grammar-Syntax-Analyzer/util.cpp

CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/util.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/util.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/KsGin/Documents/Compilers/Syntax-Analyzer/LL1Grammar-Syntax-Analyzer/util.cpp > CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/util.cpp.i

CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/util.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/util.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/KsGin/Documents/Compilers/Syntax-Analyzer/LL1Grammar-Syntax-Analyzer/util.cpp -o CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/util.cpp.s

CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/util.cpp.o.requires:

.PHONY : CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/util.cpp.o.requires

CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/util.cpp.o.provides: CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/util.cpp.o.requires
	$(MAKE) -f CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/build.make CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/util.cpp.o.provides.build
.PHONY : CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/util.cpp.o.provides

CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/util.cpp.o.provides.build: CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/util.cpp.o


# Object files for target LL1Grammer_Syntax_Analyzer
LL1Grammer_Syntax_Analyzer_OBJECTS = \
"CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/test.cpp.o" \
"CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/util.cpp.o"

# External object files for target LL1Grammer_Syntax_Analyzer
LL1Grammer_Syntax_Analyzer_EXTERNAL_OBJECTS =

LL1Grammer_Syntax_Analyzer: CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/test.cpp.o
LL1Grammer_Syntax_Analyzer: CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/util.cpp.o
LL1Grammer_Syntax_Analyzer: CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/build.make
LL1Grammer_Syntax_Analyzer: CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/KsGin/Documents/Compilers/Syntax-Analyzer/LL1Grammar-Syntax-Analyzer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable LL1Grammer_Syntax_Analyzer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/build: LL1Grammer_Syntax_Analyzer

.PHONY : CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/build

CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/requires: CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/test.cpp.o.requires
CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/requires: CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/util.cpp.o.requires

.PHONY : CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/requires

CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/clean

CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/depend:
	cd /Users/KsGin/Documents/Compilers/Syntax-Analyzer/LL1Grammar-Syntax-Analyzer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/KsGin/Documents/Compilers/Syntax-Analyzer/LL1Grammar-Syntax-Analyzer /Users/KsGin/Documents/Compilers/Syntax-Analyzer/LL1Grammar-Syntax-Analyzer /Users/KsGin/Documents/Compilers/Syntax-Analyzer/LL1Grammar-Syntax-Analyzer/cmake-build-debug /Users/KsGin/Documents/Compilers/Syntax-Analyzer/LL1Grammar-Syntax-Analyzer/cmake-build-debug /Users/KsGin/Documents/Compilers/Syntax-Analyzer/LL1Grammar-Syntax-Analyzer/cmake-build-debug/CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LL1Grammer_Syntax_Analyzer.dir/depend

