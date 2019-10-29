#include "holberton.h"

/**
 * _printf - my printf
 * @format: input constant
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

	if (format[0] == 37 && format[1] == 00)
		return (-1);

	i = 0;
	while (format && format[i] != 00)
	{
		i = _strncat(buf, format, i);
		if (format[i] == 37)
		{
			i++;
			temp_str = fntn(format[i], argu);
			_strcat(buf, temp_str);
		}
		if (format[i] != 00)
			i++;
	}
	i = _strlen(buf);
	write(1, buf, i);
	va_end(argu);
	free(buf);
	return (i);
}
