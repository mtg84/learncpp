# Introduction

## What is C++ ?

### Distinct PArts of C++
- C language
- C preprocessor
- Classes and objects
- Templates
- Standard Template Library (STL)

### Versions of C++
- C++98 / C++ 3
- C++11
- C++ 14
- C++ 17
- C++ 20 (pending)

### cout vs puts
- cout requires the STL
- cout has unique syntax
- cout, puts, printf are all part of the C++ standard text output


## The C++ toolchain
- C++ is a compiled language
- Source code    =>    Preprocessor    =>    Compiler    =>    Linker    =>    Run

### Preprocessor
 The preprocessor is responsible for: expanding macros, providing conditional compilation, combining source files with included header files into a single file for the compiler.

 The output from the preprocessor is a usually a larger file of <u>source code</u> called a <b>translation unit </b>.

 ### Compiler
 The compiler takes the source code from each translation unit and translates it into <u>object code</u>.

 This object code includes a <b>symbol table </b> that allows it to link with code in other <u>object files</u> including libraries.

 The object file from the compiler is not yet executable by the OS.

### Linker
A linker takes one or more object files, resolves all their interdependencies, and combines them into something the OS can run.

This allows you to use external libraries even when you dont have the source code from those libraries.

### Run
The output from the linker is an executable that can run in your OS.

### Compiling: Preprocessor + Compiler + Linker
This combined set of actions is often collectivelly referred to as <b>compiling</b>.