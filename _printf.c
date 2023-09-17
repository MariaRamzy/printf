#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
* print_char - prints a char
* @arg: the character argument
* Description - function prints a character argument
* Return: void
*/
int print_char(va_list arg)
{
	int n = va_arg(arg, int);

	write(1, &n, 1);
	if (n == '\0')
		return (0);
	return (1);
}

/**
* print_string - prints a string
* @arg: string to be printed
* Description - this function print a string argument
* Return: void
*/
int print_string(va_list arg)
{
	int n = 0;
	char *a = va_arg(arg, char *);

	if (a == NULL)
	{
		write(1, "(null)", 6);
		return (-8);
	}
	while (*a != '\0')
	{
		write(1, a, 1);
		n++;
		a++;
	}
	return (n);
}

/**
* print_percent - prints %
* Return: 1
*/
int print_percent(void)
{
	write(1, "%", 1);
	return (1);
}

/**
* print - function that prints arguments
* @format: the string
* @arg: the arguments
* Description - this function links operators to actions
* Return: string length
*/
int print(const char *format, va_list arg)
{
	int i = 0, n = 0, add = 0, c = 0;

	pair pai[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};

	while (format != NULL && format[c] != '\0')
	{
		n = 0;
		add = 0;
		if (format[c] == '%')
		{
			c++;
			while (pai[n].a != '\0')
			{
				if (format[c] == pai[n].a)
				{
					add = pai[n].ptr(arg);
					i = i + add;
				}
				n++;
			}
		}
		else
		{
			i++;
			write(1, &format[c], 1);
		}
		c++;
	}
	return (i);
}

/**
* _printf - prints characters and strings
* @format: the operators and string to be printed
* Description - this function prints a string and chars
* Return: the string length or -1
*/
int _printf(const char *format, ...)
{
	va_list arg;
	int i;

	if (format == NULL)
		return (0);
	va_start(arg, format);
	if (format == NULL && *format == '\0')
		return (-1);
	i = print(format, arg);
	va_end(arg);
	return (i);
}
