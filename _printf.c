#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
* _strlen - finds the lenght of a string
* @s: input string
* Return: lenght of the string
*/

int _strlen(const char *s)
{
	int i;

	for (i = 0; i < s[i]; i++)
		;
	return (i);
}

/**
* _printf - prints a char and string to stdout
* @format: format specifier
* @...: variable number of arguments
* Return: lenght of the string
*/
int _printf(const char *format, ...)
{
	va_list args;

	int i, len;

	len = _strlen(format);

	va_start(args, format);
	for (i = 0; i < len; i++)
	{
		if (format[i] == '%')
			i++;
		if (format[i - 1] == '%' && format[i] == 'c')
		{
			putchar((char)va_arg(args, int);
			i++;
		}
		if (format[i - 1] == '%' && format[i] == 's')
		{
			putchar((char)va_arg(args, int);
			i++;
		}
		if (format[i - 1] == '%' && format[i] == '%')
		{
			putchar((char)va_arg(args, int);
			i++;
		}
		putchar(format[i]);
	}
	va_end(args);
	return (len);
}
