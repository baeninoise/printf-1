#include "holberton.h"

/**
 * fntn - funtion is a menu
 * @argu: greep of variadic arguments
 * Return: string that before will be concat to buffer
 */

 char *fntn(const char symbl, va_list argu)
 {
     char *tmp_str;
     sir slct[] = {
		{'c', str_chr}
		//{'s', str_str},
	};

    int i;

    i = 0;
    while (slct[i].flag != symbl && i < 2)
    {
        i++;
    }
    tmp_str = slct[i].fn(argu);
    return (tmp_str);
 }