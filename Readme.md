# Description
This is simple project using CMake for multidirectory C++ project with SDL, SDL_Image, GoogleTest and Github Workflows for automated tests run.

# Prerequisites
## On Windows:

1. Install Mingw-w64.
1. Install cmake.
1. Download SDL development library.
1. Download SDL image development library

# How to run
## On Windows:

### Pre-steps

#### Update CmakeLists.txt
1. Rename `CMakeLists.txt.example` to `CMakeLists.txt`
1. Replace `[PATH_TO_SDL]` in `CMakeLists.txt` with path where you keep SDL source.
1. Replace `[PATH_TO_SDL_image]` in `CMakeLists.txt` with path where you keep SDL source.

#### Update Visual Studio Code configuration
1. Rename `.vscode/c_cpp_properties.json.example` to `.vscode/c_cpp_properties.json`
1. Replace `[PATH_TO_SDL]` in `.vscode/c_cpp_properties.json` with path where you keep SDL source.
1. Replace `[PATH_TO_SDL_image]` in `.vscode/c_cpp_properties.json` with path where you keep SDL source.

#### Prepare SDL
1. Set `prefix`, `SDL2_PREFIX`, `SDL2_EXEC_PREFIX` in `sdl2-config.cmake` in `[PATH_TO_SDL]/lib/cmake/SDL2` directory to `[PATH_TO_SDL]`.
1. Replace `[PATH_TO_SDL_image]` in `utils/sdl2_image-config.cmake.example`
1. Copy `utils/sdl2_image-config.cmake.example` to `[PATH_TO_SDL_image]/SDL2_image-2.0.5/lib/x64/cmake` (create folder if not exists)
1. Copy `SDL2.dll`, `SDL2_image.dll`, `libpng16-16.dll`, `zlib.1.dll` to `output` directory.

### From terminal:
1. From root directory run command `cmake -G "MinGW Makefiles" .`
1. Run command `mingw32-make.exe`
1. Run executable `./output/game.exe`
1. For tests run executable `./output/test.exe`

### From VSCode:

To build project from VSCode go to `Terminal -> Run Build Task`

To debug project in VSCode go to `Run -> Start Debugging` or `Run -> Start without Debugging`

### Notes

* Having separate `CmakeLists.txt` for Github Workflows is probably not the best solution. Although configuring SDL on Windows Workflow Machine seems like tedious task thats why i went with running build on Ubuntu machine with dedicated CmakeLists.txt (stored in `.github/workflows/utils`) and installing required libraries with apt-get. It probably would be possible to make parameterized cmakelists that would handle all cases.
