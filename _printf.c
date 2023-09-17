#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: is a character string
 * @...: variable
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list prts;

	va_start(prts, format);

	if (format[count] == '%')
	{
		count++;
		while (format[count] <= 48)
		{
			switch (format[count])
			{
				case 'c':
					printf("%c", va_arg(prts, int));
					break;
				case 's':
					printf("%s", va_arg(prts, char*));
					break;
				case '%':
					printf("%%", va_arg(prts, void*));
					break;
				default:
					putchar(format[count]);
			}
		}
	}
	else
	{
		putchar(format[count]);
	}
	count++;
	va_end(prts);
	return (count);
}
