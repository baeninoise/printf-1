#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct prin
{
	char flag;
	void (*fn)(va_list argu);
}sir;

void print_string(va_args);
#endif
