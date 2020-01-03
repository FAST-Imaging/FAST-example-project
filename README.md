FAST Example Application
==================================

This repository is an example and a template of how to create a new stand-alone C++ application using FAST.

Setup
----------------------------------
1. Either
   - (Download a release of FAST)[https://github.com/smistad/FAST/releases]
   - Compile and install FAST on your system: See instructions here for Windows and Linux (Ubuntu)
2. Clone this repository
   ```bash
   git clone ...
   ```
3. Setup build environment using CMake
   Linux
   ```bash
   mkdir build
   cd build
   cmake .. -DFAST_DIR=/path/to/FAST/cmake/
   ``` 
   Windows (Visual Studio)
   ```bash
   mkdir build
   cd build
   cmake .. -DFAST_DIR=/path/to/FAST/cmake/
   ```
4. Build
