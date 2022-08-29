# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Soft\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Soft\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\mydata\cuda\kmeans

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\mydata\cuda\kmeans\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\gpukmeanslib.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\gpukmeanslib.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\gpukmeanslib.dir\flags.make

CMakeFiles\gpukmeanslib.dir\KmeansCUDA.cu.obj: CMakeFiles\gpukmeanslib.dir\flags.make
CMakeFiles\gpukmeanslib.dir\KmeansCUDA.cu.obj: ..\KmeansCUDA.cu
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\mydata\cuda\kmeans\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CUDA object CMakeFiles/gpukmeanslib.dir/KmeansCUDA.cu.obj"
	C:\PROGRA~1\NVIDIA~2\CUDA\v10.1\bin\nvcc.exe  $(CUDA_DEFINES) $(CUDA_INCLUDES) $(CUDA_FLAGS) -x cu -c E:\mydata\cuda\kmeans\KmeansCUDA.cu -o CMakeFiles\gpukmeanslib.dir\KmeansCUDA.cu.obj -Xcompiler=-FdCMakeFiles\gpukmeanslib.dir\,-FS

CMakeFiles\gpukmeanslib.dir\KmeansCUDA.cu.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CUDA source to CMakeFiles/gpukmeanslib.dir/KmeansCUDA.cu.i"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_CUDA_CREATE_PREPROCESSED_SOURCE

CMakeFiles\gpukmeanslib.dir\KmeansCUDA.cu.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CUDA source to assembly CMakeFiles/gpukmeanslib.dir/KmeansCUDA.cu.s"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_CUDA_CREATE_ASSEMBLY_SOURCE

# Object files for target gpukmeanslib
gpukmeanslib_OBJECTS = \
"CMakeFiles\gpukmeanslib.dir\KmeansCUDA.cu.obj"

# External object files for target gpukmeanslib
gpukmeanslib_EXTERNAL_OBJECTS =

gpukmeanslib.dll: CMakeFiles\gpukmeanslib.dir\KmeansCUDA.cu.obj
gpukmeanslib.dll: CMakeFiles\gpukmeanslib.dir\build.make
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\mydata\cuda\kmeans\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CUDA shared library gpukmeanslib.dll"
	"D:\Soft\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E vs_link_dll --intdir=CMakeFiles\gpukmeanslib.dir --rc="D:\Windows Kits\10\bin\10.0.17763.0\x64\rc.exe" --mt="D:\Windows Kits\10\bin\10.0.17763.0\x64\mt.exe" --manifests -- "D:\Soft\Vistual Studio2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\link.exe" /nologo $(gpukmeanslib_OBJECTS) $(gpukmeanslib_EXTERNAL_OBJECTS) @<<
 /out:gpukmeanslib.dll /implib:gpukmeanslib.lib /pdb:E:\mydata\cuda\kmeans\cmake-build-debug\gpukmeanslib.pdb /dll /version:0.0 /debug /INCREMENTAL  cudadevrt.lib cudart_static.lib kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib  -LIBPATH:"C:/Program Files/NVIDIA GPU Computing Toolkit/CUDA/v10.1/lib/x64" 
<<

# Rule to build all files generated by this target.
CMakeFiles\gpukmeanslib.dir\build: gpukmeanslib.dll
.PHONY : CMakeFiles\gpukmeanslib.dir\build

CMakeFiles\gpukmeanslib.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\gpukmeanslib.dir\cmake_clean.cmake
.PHONY : CMakeFiles\gpukmeanslib.dir\clean

CMakeFiles\gpukmeanslib.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" E:\mydata\cuda\kmeans E:\mydata\cuda\kmeans E:\mydata\cuda\kmeans\cmake-build-debug E:\mydata\cuda\kmeans\cmake-build-debug E:\mydata\cuda\kmeans\cmake-build-debug\CMakeFiles\gpukmeanslib.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\gpukmeanslib.dir\depend

