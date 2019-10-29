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

**Files Description**
======

The _printf function produces output according to a format:

|file|description|
|--|--|
|*holberton.h*|Contain the struct and prototypes to the _printf function|
|*man_3_printf*|Contain the man page of the _printf function with all its specifications|
|*_printf.c*|Contain the main function of the _printf
|*slct.c*|Contain the content for found the specifiers of the _printf function
|*str_char.c*|Contain the function that found a character to print with _printf function
|*str_string.c*|Contain the function that found a string to print with _printf function
|*strcat.c*|Contain the function that concatenates the buffer and the temporal string
|*strlen.c*|Contain the function that gets the length of the buffer
|*strncat.c*|Contain the function that concatenates the format with the buffer and update iterator of format
|*str_percent.c*|Contain the function that print the sign percent of the specifier format to print of _printf function
|*str_integer.c*|Contain the function that print and found a integer to print with _printf function

**Contributing**
====================
This is a project for  [Holberton School](https://www.holbertonschool.com/)  by Holberton Students.
Pull requests are welcome, if you found a bug, you can report us at the email: 970@holbertonschool.com or 1263@holbertonschool.com
Please make sure to update tests as appropriate


**Authors**
=========
- [Cristian Murcia](https://github.com/Cris-Mur)
- [Marcela Sanchez](https://github.com/marcewp15).
