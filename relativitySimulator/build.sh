#!/bin/bash

CXX=g++
CXXFLAGS="-std=c++17 -Wall -Wextra"
SRC_DIR="src"
BUILD_DIR="build"
INCLUDE_DIR="include"
TARGET="relativityCalculator"
SRC_FILES=$(find $SRC_DIR -name "*.cpp")

mkdir -p $BUILD_DIR

$CXX -I $INCLUDE_DIR $CXXFLAGS $SRC_FILES -o $BUILD_DIR/$TARGET

echo "Build complete. Executable located at $BUILD_DIR/$TARGET"
