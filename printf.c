#include "holberton.h"

/**
 * _printf - my printf
 *
 * Return: size of bufer (success) or -1 if fail
 */

int _printf(const char *format, ...)
{
	va_list argu;
	int i;

	sir slct[] = {
		{'s', print_string}
	};

	i = 0;
	va_start(argu, format);
	while ()
}
