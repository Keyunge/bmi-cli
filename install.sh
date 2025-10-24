#!/bin/bash

# Check if clang is installed
if ! command -v clang &> /dev/null; then
    echo "clang is not installed"
# Compiling
else
    echo "Compiling"
    clang -o bmi main.cpp
    sudo mv bmi /bin/
fi

if !  command -v gcc &> /dev/null; then
    echo "gcc is not installed"
    exit 1
else
    echo "Compiling"
    gcc -o bmi main.cpp
    sudo mv bmi /bin/
fi

if ! command -v bmi &> /dev/null; then
    echo "Error: bmi is not installed"
    exit 1
else
    echo "Installation complete! Success"
fi
