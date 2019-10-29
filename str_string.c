#include "holberton.h"
/**
 * str_str - print a string
 * @argu: list of arguments
 *
 * Return: the string found
 */
void *str_str(va_list argu)
{
	char *str = va_arg(list, char *);

	if (str == NULL)
	{
		return (NULL);
	}
	return (str);
}
