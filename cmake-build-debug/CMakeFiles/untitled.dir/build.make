# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\Edmosha\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Edmosha\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Edmosha\CLionProjects\lab_2.1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Edmosha\CLionProjects\lab_2.1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/untitled.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled.dir/flags.make

CMakeFiles/untitled.dir/main.cpp.obj: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Edmosha\CLionProjects\lab_2.1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/untitled.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\untitled.dir\main.cpp.obj -c C:\Users\Edmosha\CLionProjects\lab_2.1\main.cpp

CMakeFiles/untitled.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Edmosha\CLionProjects\lab_2.1\main.cpp > CMakeFiles\untitled.dir\main.cpp.i

CMakeFiles/untitled.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Edmosha\CLionProjects\lab_2.1\main.cpp -o CMakeFiles\untitled.dir\main.cpp.s

CMakeFiles/untitled.dir/students.cpp.obj: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/students.cpp.obj: ../students.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Edmosha\CLionProjects\lab_2.1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/untitled.dir/students.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\untitled.dir\students.cpp.obj -c C:\Users\Edmosha\CLionProjects\lab_2.1\students.cpp

CMakeFiles/untitled.dir/students.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled.dir/students.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Edmosha\CLionProjects\lab_2.1\students.cpp > CMakeFiles\untitled.dir\students.cpp.i

CMakeFiles/untitled.dir/students.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/students.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Edmosha\CLionProjects\lab_2.1\students.cpp -o CMakeFiles\untitled.dir\students.cpp.s

# Object files for target untitled
untitled_OBJECTS = \
"CMakeFiles/untitled.dir/main.cpp.obj" \
"CMakeFiles/untitled.dir/students.cpp.obj"

# External object files for target untitled
untitled_EXTERNAL_OBJECTS =

untitled.exe: CMakeFiles/untitled.dir/main.cpp.obj
untitled.exe: CMakeFiles/untitled.dir/students.cpp.obj
untitled.exe: CMakeFiles/untitled.dir/build.make
untitled.exe: CMakeFiles/untitled.dir/linklibs.rsp
untitled.exe: CMakeFiles/untitled.dir/objects1.rsp
untitled.exe: CMakeFiles/untitled.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Edmosha\CLionProjects\lab_2.1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable untitled.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\untitled.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled.dir/build: untitled.exe

.PHONY : CMakeFiles/untitled.dir/build

CMakeFiles/untitled.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\untitled.dir\cmake_clean.cmake
.PHONY : CMakeFiles/untitled.dir/clean

CMakeFiles/untitled.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Edmosha\CLionProjects\lab_2.1 C:\Users\Edmosha\CLionProjects\lab_2.1 C:\Users\Edmosha\CLionProjects\lab_2.1\cmake-build-debug C:\Users\Edmosha\CLionProjects\lab_2.1\cmake-build-debug C:\Users\Edmosha\CLionProjects\lab_2.1\cmake-build-debug\CMakeFiles\untitled.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/untitled.dir/depend

