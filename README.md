# Bazel C++ Demo

This codebase provides example usage of how to use Bazel with a C++
project that uses Boost, Google Test, Google Log, etc.

## Requirements

  * Ubuntu/Debian operating system

  * CMake 

  * Clang/GCC

  * Bazel

## Compiling

  ``
  bazel build //...
  ``

## Running the Application

  ``
  bazel run //src:example-binary
  ``

## Testing

  ``
  bazel test //...
  ``

## Author(s)

Stewart Henderson <henderson.geoffrey@gmail.com>
