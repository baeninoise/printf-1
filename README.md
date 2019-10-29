# _Printf Project
Creating our printf function that produces output according to a format.


![enter image description here](https://lh3.googleusercontent.com/NSs_8OENr-W8QDp_44MyRoqoPymamFlp-QOAFHjD2_2vqCSC925ylCr4v8jc4E6zlD4Rr823aR4=s550 "readme")

- This repository includes our version of the printf function, the basic and main functions. Here we will apply the knowledge that we have acquired during the learning of the programming language C.
- This project is requested by Holberton School.
---------------
**Description**
================
The printf function prints a format control string of different data types on the standard output, its roots are in the C programming language, it is a functional way to produce a precise output format for printing numerical values or ASCII characters from format specifiers that have been passed on in the argument.

**Prototype**
=================
This _printf function produces output according to a format:

    int _printf(const char *format, ...);

**Formats**
=================
|flag|function|
|--|--|
|%c|print a single character|
|%s|print a string|
|%d|print a integer as a signed decimal (base 10) number|
|%i|print same as "d", integer in base 10|

**Compilation**
====================
To compile a file with the function is necessary to add all the .c files involved in the program (functions, main files, etc). Your code will be compiled this way:

    gcc -Wall -Werror -Wextra -pedantic *.c -o name_of_executable

To execute: `./name_of_executable`

**Task**
======

0. Write a function that produces output according to a format.
- c
- s
- %

1. Handle the following conversion specifiers:
- d
- i

2. Create a man page for your function.
-----------------------------
**Authors**
=========
- [Cristian Murcia](https://github.com/Cris-Mur)
- [Marcela Sanchez](https://github.com/marcewp15).
