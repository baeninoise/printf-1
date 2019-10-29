#include "holberton.h"

/**
 * fntn - funtion is a menu
 * @argu: greep of variadic arguments
 * @symbl: input character
 * Return: string that before will be concat to buffer
 */

char *fntn(const char symbl, va_list argu)
{
	char *tmp_str;
	sir slct[] = {
		{'c', str_chr},
		{'s', str_str},
		{'%', str_percent},
		{'i', str_int},
		{'d', str_int}
	};

	int i;

	i = 0;
	while (slct[i].flag != symbl && i < 3)
	{
		i++;
	}
	tmp_str = slct[i].fn(argu);
	return (tmp_str);
}
