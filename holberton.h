#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * prin - structure that contain flag and funtion
 * @flag: character that identify funtion
 * @fn: pointer to funtion
 */

typedef struct prin
{
	char flag;
	char *(*fn)(va_list argu);
}sir;

int _strncat(char *buff,const char *format, int n);
char *fntn(const char symbl, va_list);
void *_strcat(char *dest, char *src);
char *str_chr(va_list argu);

int _printf(const char *format, ...);
#endif