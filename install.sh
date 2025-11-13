#!/bin/bash

# Check if clang is installed
if ! command -v clang >/dev/null 2>&1
then
    echo "clang is not installed"
# Compiling
else
    echo "Compiling"
    clang++ -o bmi main.cpp
    sudo mv bmi-cli /bin/
    if ! command -v bmi >/dev/null 2>&1
    then
        echo "Error: bmi is not installed"
        exit 1
    else
        echo "Installation complete! Success"
        exit 0
    fi
fi

if ! command -v gcc >/dev/null
then
    echo "gcc is not installed"
    exit 1
else
    echo "Compiling"
    g++ -o bmi main.cpp
    sudo mv bmi /bin/
    if ! command -v bmi >/dev/null 2>&1
    then
        echo "Error: bmi-cli is not installed"
        exit 1
    else
        echo "Installation complete! Success"
        exit 0
    fi
fi
