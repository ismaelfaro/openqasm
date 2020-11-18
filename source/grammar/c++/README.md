# Basic OpenQASM grama C++ example

# Dependencies

Download/install ANTLR and the C++ runtime from https://www.antlr.org/download/

# Compile

You can check the [makefile](makefile) to adapt it. Basically use the [**qasm3.g4**](../qasm3.g4) grama file, and generate the files and objects to use in your programs. 

There is a c++ program example [**qasm3.cpp**](qasm3.cpp), the main components are **qasm3Lexer** and **qasm3Parser**, generated from the [**qasm3.g4**](../qasm3.g4).

> make

# test

> qasm3.exe