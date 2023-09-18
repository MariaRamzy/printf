#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: a character string
 * @...: variable
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	unsigned int count;
	unsigned int a = 0;
	va_list args;

	va_start(args, format);
	while (format[a] != '\0')
	{
		a++;
		if (!format)
		{
			return (-1);

			switch (format[a])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 's':
					printf("%s", _strlen(va_arg(args, char*)));
					break;
				case '%':
					_putchar('%');
					break;
				default:
					_putchar(format[a]);
					break;
			}
			a++;
		}
		else
		{
			count++;
			_putchar(format[a]);
		}
	}
	va_end(args);
	return (count);
}
