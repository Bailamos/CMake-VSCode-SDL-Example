# Description
This is simple project using CMake for multidirectory C++ project with SDL and GoogleTest.

# Prerequisites
## On Windows:

1. Install Mingw-w64.
1. Install cmake.
1. Download SDL development library.

# How to run
## On Windows:

### Pre-steps

1. Rename `.vscode/c_cpp_properties.json.example` to `.vscode/c_cpp_properties.json`
1. Replace `[PATH_TO_SDL]` in `.vscode/c_cpp_properties.json` with path where you keep SDL source.
1. Rename `CMakeLists.txt.example` to `CMakeLists.txt`
1. Replace `[PATH_TO_SDL]` in `CMakeLists.txt` with path where you keep SDL source.
1. Set `prefix`, `SDL2_PREFIX`, `SDL2_EXEC_PREFIX` in `sdl2-config.cmake` in `[PATH_TO_SDL]/lib/cmake/SDL2` directory to `[PATH_TO_SDL]`.
1. Copy SDL2.dll to src directory.

### From terminal:
1. From root directory run command `cmake -G "MinGW Makefiles" .`
1. Run command `mingw32-make.exe`
1. Run executable `./src/main.exe`
1. For tests run executable `./tests/example.exe`


### From VSCode:

To build project from VSCode go to `Terminal -> Run Build Task`

To debug project in VSCode go to `Run -> Start Debugging` or `Run -> Start without Debugging`
