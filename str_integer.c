#include "holberton.h"
/**
 * str_int - prints a integer
 * @argu: list of arguments
 *
 * Return: the integer found
 */
char *str_int(va_list argu)
{
	unsigned int abs, aux, numb, count;
	int n;
	char *str;

	count = 0;

	n = va_arg(argu, int);
	if (n < 0)
	{
		abs = (n * -1);
		count = count + _putchar('-');

	}
	else
	{
		abs = n;
	}

	aux = abs;
	numb = 1;
	while (aux > 9)
	{
		aux = aux / 10;
		numb = numb * 10;
	}
	str = malloc(numb);
	while (numb >= 1)
	{
		str[count] = (((abs / numb) % 10) + '0');
		count++;
		numb = numb / 10;
	}
	return (str);
}
