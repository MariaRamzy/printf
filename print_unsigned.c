#include "main.h"

/**
 * printf_unsigned_integer - printf unsigned integer
 * @list: list of argument
 * Return: number
 */
int printf_unsigned_integer(va_list list)
{
	unsigned short n;
	unsigned long z;

	if (n->modifiers)
	{
		printf("%u", va_arg(list, unsigned short);
	}
	else if (z->modifiers)
	{
		printf("%u", va_arg(list, unsigned long);
	}
	else
	{
		printf("%u", va_arg(list, unsigned long long);
	}
	return (1);
}
