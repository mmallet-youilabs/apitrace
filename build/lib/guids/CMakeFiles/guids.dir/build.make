# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.10.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.10.1/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mathieumallet/Documents/youidev/apitrace

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mathieumallet/Documents/youidev/apitrace/build

# Include any dependencies generated for this target.
include lib/guids/CMakeFiles/guids.dir/depend.make

# Include the progress variables for this target.
include lib/guids/CMakeFiles/guids.dir/progress.make

# Include the compile flags for this target's objects.
include lib/guids/CMakeFiles/guids.dir/flags.make

lib/guids/CMakeFiles/guids.dir/guids.cpp.o: lib/guids/CMakeFiles/guids.dir/flags.make
lib/guids/CMakeFiles/guids.dir/guids.cpp.o: ../lib/guids/guids.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mathieumallet/Documents/youidev/apitrace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/guids/CMakeFiles/guids.dir/guids.cpp.o"
	cd /Users/mathieumallet/Documents/youidev/apitrace/build/lib/guids && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/guids.dir/guids.cpp.o -c /Users/mathieumallet/Documents/youidev/apitrace/lib/guids/guids.cpp

lib/guids/CMakeFiles/guids.dir/guids.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/guids.dir/guids.cpp.i"
	cd /Users/mathieumallet/Documents/youidev/apitrace/build/lib/guids && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mathieumallet/Documents/youidev/apitrace/lib/guids/guids.cpp > CMakeFiles/guids.dir/guids.cpp.i

lib/guids/CMakeFiles/guids.dir/guids.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/guids.dir/guids.cpp.s"
	cd /Users/mathieumallet/Documents/youidev/apitrace/build/lib/guids && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mathieumallet/Documents/youidev/apitrace/lib/guids/guids.cpp -o CMakeFiles/guids.dir/guids.cpp.s

lib/guids/CMakeFiles/guids.dir/guids.cpp.o.requires:

.PHONY : lib/guids/CMakeFiles/guids.dir/guids.cpp.o.requires

lib/guids/CMakeFiles/guids.dir/guids.cpp.o.provides: lib/guids/CMakeFiles/guids.dir/guids.cpp.o.requires
	$(MAKE) -f lib/guids/CMakeFiles/guids.dir/build.make lib/guids/CMakeFiles/guids.dir/guids.cpp.o.provides.build
.PHONY : lib/guids/CMakeFiles/guids.dir/guids.cpp.o.provides

lib/guids/CMakeFiles/guids.dir/guids.cpp.o.provides.build: lib/guids/CMakeFiles/guids.dir/guids.cpp.o


# Object files for target guids
guids_OBJECTS = \
"CMakeFiles/guids.dir/guids.cpp.o"

# External object files for target guids
guids_EXTERNAL_OBJECTS =

lib/guids/libguids.a: lib/guids/CMakeFiles/guids.dir/guids.cpp.o
lib/guids/libguids.a: lib/guids/CMakeFiles/guids.dir/build.make
lib/guids/libguids.a: lib/guids/CMakeFiles/guids.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mathieumallet/Documents/youidev/apitrace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libguids.a"
	cd /Users/mathieumallet/Documents/youidev/apitrace/build/lib/guids && $(CMAKE_COMMAND) -P CMakeFiles/guids.dir/cmake_clean_target.cmake
	cd /Users/mathieumallet/Documents/youidev/apitrace/build/lib/guids && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/guids.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/guids/CMakeFiles/guids.dir/build: lib/guids/libguids.a

.PHONY : lib/guids/CMakeFiles/guids.dir/build

lib/guids/CMakeFiles/guids.dir/requires: lib/guids/CMakeFiles/guids.dir/guids.cpp.o.requires

.PHONY : lib/guids/CMakeFiles/guids.dir/requires

lib/guids/CMakeFiles/guids.dir/clean:
	cd /Users/mathieumallet/Documents/youidev/apitrace/build/lib/guids && $(CMAKE_COMMAND) -P CMakeFiles/guids.dir/cmake_clean.cmake
.PHONY : lib/guids/CMakeFiles/guids.dir/clean

lib/guids/CMakeFiles/guids.dir/depend:
	cd /Users/mathieumallet/Documents/youidev/apitrace/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mathieumallet/Documents/youidev/apitrace /Users/mathieumallet/Documents/youidev/apitrace/lib/guids /Users/mathieumallet/Documents/youidev/apitrace/build /Users/mathieumallet/Documents/youidev/apitrace/build/lib/guids /Users/mathieumallet/Documents/youidev/apitrace/build/lib/guids/CMakeFiles/guids.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/guids/CMakeFiles/guids.dir/depend

