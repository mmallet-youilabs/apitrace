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
include dispatch/CMakeFiles/glproc_gl.dir/depend.make

# Include the progress variables for this target.
include dispatch/CMakeFiles/glproc_gl.dir/progress.make

# Include the compile flags for this target's objects.
include dispatch/CMakeFiles/glproc_gl.dir/flags.make

dispatch/CMakeFiles/glproc_gl.dir/glproc_gl.cpp.o: dispatch/CMakeFiles/glproc_gl.dir/flags.make
dispatch/CMakeFiles/glproc_gl.dir/glproc_gl.cpp.o: ../dispatch/glproc_gl.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mathieumallet/Documents/youidev/apitrace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object dispatch/CMakeFiles/glproc_gl.dir/glproc_gl.cpp.o"
	cd /Users/mathieumallet/Documents/youidev/apitrace/build/dispatch && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/glproc_gl.dir/glproc_gl.cpp.o -c /Users/mathieumallet/Documents/youidev/apitrace/dispatch/glproc_gl.cpp

dispatch/CMakeFiles/glproc_gl.dir/glproc_gl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/glproc_gl.dir/glproc_gl.cpp.i"
	cd /Users/mathieumallet/Documents/youidev/apitrace/build/dispatch && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mathieumallet/Documents/youidev/apitrace/dispatch/glproc_gl.cpp > CMakeFiles/glproc_gl.dir/glproc_gl.cpp.i

dispatch/CMakeFiles/glproc_gl.dir/glproc_gl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/glproc_gl.dir/glproc_gl.cpp.s"
	cd /Users/mathieumallet/Documents/youidev/apitrace/build/dispatch && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mathieumallet/Documents/youidev/apitrace/dispatch/glproc_gl.cpp -o CMakeFiles/glproc_gl.dir/glproc_gl.cpp.s

dispatch/CMakeFiles/glproc_gl.dir/glproc_gl.cpp.o.requires:

.PHONY : dispatch/CMakeFiles/glproc_gl.dir/glproc_gl.cpp.o.requires

dispatch/CMakeFiles/glproc_gl.dir/glproc_gl.cpp.o.provides: dispatch/CMakeFiles/glproc_gl.dir/glproc_gl.cpp.o.requires
	$(MAKE) -f dispatch/CMakeFiles/glproc_gl.dir/build.make dispatch/CMakeFiles/glproc_gl.dir/glproc_gl.cpp.o.provides.build
.PHONY : dispatch/CMakeFiles/glproc_gl.dir/glproc_gl.cpp.o.provides

dispatch/CMakeFiles/glproc_gl.dir/glproc_gl.cpp.o.provides.build: dispatch/CMakeFiles/glproc_gl.dir/glproc_gl.cpp.o


# Object files for target glproc_gl
glproc_gl_OBJECTS = \
"CMakeFiles/glproc_gl.dir/glproc_gl.cpp.o"

# External object files for target glproc_gl
glproc_gl_EXTERNAL_OBJECTS =

dispatch/libglproc_gl.a: dispatch/CMakeFiles/glproc_gl.dir/glproc_gl.cpp.o
dispatch/libglproc_gl.a: dispatch/CMakeFiles/glproc_gl.dir/build.make
dispatch/libglproc_gl.a: dispatch/CMakeFiles/glproc_gl.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mathieumallet/Documents/youidev/apitrace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libglproc_gl.a"
	cd /Users/mathieumallet/Documents/youidev/apitrace/build/dispatch && $(CMAKE_COMMAND) -P CMakeFiles/glproc_gl.dir/cmake_clean_target.cmake
	cd /Users/mathieumallet/Documents/youidev/apitrace/build/dispatch && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/glproc_gl.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
dispatch/CMakeFiles/glproc_gl.dir/build: dispatch/libglproc_gl.a

.PHONY : dispatch/CMakeFiles/glproc_gl.dir/build

dispatch/CMakeFiles/glproc_gl.dir/requires: dispatch/CMakeFiles/glproc_gl.dir/glproc_gl.cpp.o.requires

.PHONY : dispatch/CMakeFiles/glproc_gl.dir/requires

dispatch/CMakeFiles/glproc_gl.dir/clean:
	cd /Users/mathieumallet/Documents/youidev/apitrace/build/dispatch && $(CMAKE_COMMAND) -P CMakeFiles/glproc_gl.dir/cmake_clean.cmake
.PHONY : dispatch/CMakeFiles/glproc_gl.dir/clean

dispatch/CMakeFiles/glproc_gl.dir/depend:
	cd /Users/mathieumallet/Documents/youidev/apitrace/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mathieumallet/Documents/youidev/apitrace /Users/mathieumallet/Documents/youidev/apitrace/dispatch /Users/mathieumallet/Documents/youidev/apitrace/build /Users/mathieumallet/Documents/youidev/apitrace/build/dispatch /Users/mathieumallet/Documents/youidev/apitrace/build/dispatch/CMakeFiles/glproc_gl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : dispatch/CMakeFiles/glproc_gl.dir/depend

