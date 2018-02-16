# CMake Hello World

A simple, straightforward example of a C++ library built using CMake "from scratch".

It's meant to be easily extensible and does as little of the fancy stuff as possible.

It demonstrates how to use external dependencies (`gflags/glog/gtest`) as git submodules.

It also shows how to add simple tests using CMake's built-in test framework.

## How To

Simply do the following from the project root:

    $ mkdir build && cd build
    $ cmake ..
    $ make
    
... and that's it.

If you want to run the CMake tests, just do:

    $ make test

in the `build` directory.
