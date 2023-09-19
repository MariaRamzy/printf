#include "main.h"

/**
 * printf_address - print as pointer
 * @val: val of argument
 * Return: number
 */
int printf_address(va_list val)
{
void *p;
char *s = "(nil)";
long int a;
int b;
int i;

p = va_arg(val, void*);
if (p == NULL)
{
for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
return (i);
}
a = (unsigned long int)p;
_putchar('0');
_putchar('x');
b = printf_hex_aux(a);
return (b + 2);
}
