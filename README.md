#CS-50 2021 Course 

Introduction To Computer Science.

All examples are from the Cs50 course.
Currently learning C: Basics 
Src contains all excutable C source code. 


Used with the help of CS50 Library

Steps to install 

    1. Download the latest release from https://github.com/cs50/libcs50/releases

    2. Extract libcs50-*.*

    3. cd libcs50-*

    4. sudo make install


### Study Guided

Compiler

A compiler is a computer program that transforms human-readable (Programming Language) source code into another computer language (binary) code.
The concept of "Compilation".
Example: C Source Code =>  Compiler => "0's" and "1's"

Code runs in the processor which is in the cpu is only able to understand 0's and 1's, which is binary code.


Cheat Sheet:
Print To Console : 
                    printf(aug);

Functions:
    Arguments -> Functions (algorithms) -> Output (return value) 
        Return values and variables

Format Code
    - Allows for plug in an argument
    Example:
        printf("hello, %s\n", "Hector"); | prints "Hello, Hector"

clang hello.c -o hello -lcs50

Command to run code: " clang filename.c -o filename -lcs50 "
