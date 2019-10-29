#include "holberton.h"

/**
 * p_char - funtion that make a string with a one char
 * list: input variable arguments
 * Return: string
 */

char *str_chr(va_list argu)
{
	char *str;
	str = malloc(2 * sizeof(char));
	str[0] = va_arg(argu, int);
	return str;
}
