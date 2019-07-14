# xBGAS Bootstrap Library Infrastructure

## Getting Started

## Prerequisites
* xBGAS GNU Compiler Environment
* CMake 2.6+

## Building

1. Clone the repository
```
git clone https://github.com/tactcomplabs/xbgas-bootstrap
```
2. Setup the RISCV environment
```
export RISCV=/path/to/riscv/compiler/install
```
3. Setup your build tree
```
cd xbgas-bootstrap
mkdir build
cd build
```
4. Execute CMake to generate the makefiles [see options below]
```
cmake ../
```
5. Execute the build
```
make
```
6. Build your application code and link it against xbgas-bootstrap
```
$RISCV/bin/riscv64-unknown-elf-gcc -o foo.exe foo.c -lxbgas-bootstrap
```

## Build Options
By default, the xbgas-bootstrap is setup to build RV64-compatible bootstrap and library code.
If you seek to build RV32-compatible code, you must specify this during the CMake process using 
the following option:
* -DXBGAS\_RV32=ON

The full CMake command line will resemble the following:
```
cmake -DXBGAS\_RV32=ON ../
```

## Authors
* *John Leidel* - *Chief Scientist* - [Tactical Computing Labs](http://www.tactcomplabs.com)

## Acknowledgements
* None at this time
