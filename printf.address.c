#include "main.h"

/**
 * printf_address - print as pointer
 * @val: val of argument
 * Return: number
 */
int printf_address(va_list val)
{
	void *p;
	unsigned int a;

	a = *p;

	if (p == NULL)
	{
		printf("%p", va_arg(val, void *));
	}
	_putchar ('x');
	_putchar ('0');
	return (a);
}
