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
CMAKE_COMMAND = "C:\IDEs\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\IDEs\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Edu\I rok\Podstawy programowania I\Minesweeper"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Edu\I rok\Podstawy programowania I\Minesweeper\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Minesweeper.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Minesweeper.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Minesweeper.dir/flags.make

CMakeFiles/Minesweeper.dir/main.c.obj: CMakeFiles/Minesweeper.dir/flags.make
CMakeFiles/Minesweeper.dir/main.c.obj: CMakeFiles/Minesweeper.dir/includes_C.rsp
CMakeFiles/Minesweeper.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Edu\I rok\Podstawy programowania I\Minesweeper\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Minesweeper.dir/main.c.obj"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Minesweeper.dir\main.c.obj   -c "C:\Edu\I rok\Podstawy programowania I\Minesweeper\main.c"

CMakeFiles/Minesweeper.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Minesweeper.dir/main.c.i"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Edu\I rok\Podstawy programowania I\Minesweeper\main.c" > CMakeFiles\Minesweeper.dir\main.c.i

CMakeFiles/Minesweeper.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Minesweeper.dir/main.c.s"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Edu\I rok\Podstawy programowania I\Minesweeper\main.c" -o CMakeFiles\Minesweeper.dir\main.c.s

CMakeFiles/Minesweeper.dir/rendering.c.obj: CMakeFiles/Minesweeper.dir/flags.make
CMakeFiles/Minesweeper.dir/rendering.c.obj: CMakeFiles/Minesweeper.dir/includes_C.rsp
CMakeFiles/Minesweeper.dir/rendering.c.obj: ../rendering.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Edu\I rok\Podstawy programowania I\Minesweeper\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Minesweeper.dir/rendering.c.obj"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Minesweeper.dir\rendering.c.obj   -c "C:\Edu\I rok\Podstawy programowania I\Minesweeper\rendering.c"

CMakeFiles/Minesweeper.dir/rendering.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Minesweeper.dir/rendering.c.i"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Edu\I rok\Podstawy programowania I\Minesweeper\rendering.c" > CMakeFiles\Minesweeper.dir\rendering.c.i

CMakeFiles/Minesweeper.dir/rendering.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Minesweeper.dir/rendering.c.s"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Edu\I rok\Podstawy programowania I\Minesweeper\rendering.c" -o CMakeFiles\Minesweeper.dir\rendering.c.s

# Object files for target Minesweeper
Minesweeper_OBJECTS = \
"CMakeFiles/Minesweeper.dir/main.c.obj" \
"CMakeFiles/Minesweeper.dir/rendering.c.obj"

# External object files for target Minesweeper
Minesweeper_EXTERNAL_OBJECTS =

Minesweeper.exe: CMakeFiles/Minesweeper.dir/main.c.obj
Minesweeper.exe: CMakeFiles/Minesweeper.dir/rendering.c.obj
Minesweeper.exe: CMakeFiles/Minesweeper.dir/build.make
Minesweeper.exe: CMakeFiles/Minesweeper.dir/linklibs.rsp
Minesweeper.exe: CMakeFiles/Minesweeper.dir/objects1.rsp
Minesweeper.exe: CMakeFiles/Minesweeper.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Edu\I rok\Podstawy programowania I\Minesweeper\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Minesweeper.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Minesweeper.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Minesweeper.dir/build: Minesweeper.exe

.PHONY : CMakeFiles/Minesweeper.dir/build

CMakeFiles/Minesweeper.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Minesweeper.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Minesweeper.dir/clean

CMakeFiles/Minesweeper.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Edu\I rok\Podstawy programowania I\Minesweeper" "C:\Edu\I rok\Podstawy programowania I\Minesweeper" "C:\Edu\I rok\Podstawy programowania I\Minesweeper\cmake-build-debug" "C:\Edu\I rok\Podstawy programowania I\Minesweeper\cmake-build-debug" "C:\Edu\I rok\Podstawy programowania I\Minesweeper\cmake-build-debug\CMakeFiles\Minesweeper.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Minesweeper.dir/depend

