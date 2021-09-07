FAST Example Application
==================================

This repository is an example and a template of how to create a new stand-alone C++ application using [FAST](https://github.com/smistad/FAST).
You need git, cmake and a C++ compiler (e.g. gcc on Linux, visual studio on Windows) to compile this example.

Setup
----------------------------------
1. Either
   - [Install a release of FAST](https://fast.eriksmistad.no/install.html) **OR**
   - Compile and install FAST on your system: See instructions here for [Windows](https://fast.eriksmistad.no/building-on-windows.html) or [Linux (Ubuntu)](https://fast.eriksmistad.no/install-ubuntu-linux.html).
2. Clone this repository
   ```bash
   git clone https://github.com/smistad/FAST-example-project.git
   ```
3. Setup build environment using CMake  
   *Linux (Ubuntu)*
   ```bash
   mkdir build
   cd build
   cmake .. -DFAST_DIR=/path/to/FAST/cmake/
   ``` 
   *Windows (Visual Studio)*
   Modify generator -G string to match your Visual studio version. This command will create a visual studio solution in your build folder.
   ```bash
   mkdir build
   cd build
   cmake .. -DFAST_DIR=C:\path\to\FAST\cmake\ -G "Visual Studio 16 2019" -A x64
   ```
4. Build
   ```bash
   cmake --build . --config Release --target fastExample
   ```
5. Run
   *Linux (Ubuntu)*
   ```bash
   ./fastExample
   ```
   *Windows*
   ```powershell
   cd Release
   fastExample.exe
   ```

![Screenshot of example](https://www.eriksmistad.no/wp-content/uploads/FAST-example-application.png)
