# DynamicProgramming

### Summary
This repositry containts practice solutions to some of the dynamic programming problems in computer science. For each problem there is
* problem definition
* solution discussion
* solution implementation
* unit tests using Google Test

### How to build the C++ solutions and run unit tests
#### Prerequisites
* C++ compiler, preferably [GCC](https://gcc.gnu.org/)
* [Cmake](https://cmake.org/cmake/help/latest/guide/tutorial/index.html)
* [GoogleTest](https://github.com/google/googletest)

#### How to build
1. Clone this repository
2. Create a folder inside main folder of the repository. E.g; `mkdir build`
3. Navigate to folder created in step 2. `cd build`
4. Run Cmake to generate makefiles. `cmake ..`
5. Build. `make`
6. Run the unit tests. E.g; `./Fibonacci/Fibonacci` for running Fibonacci tests.
   You can run all tests with a command `ctest -V` while in folder `build`.

### License
[MIT License](https://github.com/hassansalehe/DynamicProgramming/blob/main/LICENSE)
