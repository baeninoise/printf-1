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
	va_start(argu, format);

	char *buf;
	char *temp_str;

	buf = malloc(1024);
	if (buf == NULL)
	{
		return (-1);
	}

	i = 0;
	_strncat(buf, format, i);
	while (format && format[i])
	{
		if (format[i] == 37)
		{
			i++;
			temp_str = fntn(format[i], argu);
			_strcat(buf, temp_str);
		}
		i++;
	}

	write(1, buf, i);
	return (i);
}