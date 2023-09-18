#include "main.h"

/**
 * rev_string - reverses a string in place
 *
 * @s: string to reverse
 * Return: A pointer to a character
 */
char *rev_string(char *s)
{
int len;
int head;
char tmp;
char *dest;

for (len = 0; s[len] != '\0'; len++)
{}

dest = malloc(sizeof(char) * len + 1);
if (dest == NULL)
return (NULL);

_memcpy(dest, s, len);
for (head = 0; head < len; head++, len--)
{
tmp = dest[len - 1];
dest[len - 1] = dest[head];
dest[head] = tmp;
}
return (dest);
}

/**
 * printf_binary - Converts a number from base 10 to binary
 * @list: List of arguments passed to this function
 * Return: The binary number printed
 */

int printf_binary(va_list list)
{
unsigned int num;
int i, len;
char *str;
char *rev_str;

num = va_arg(list, unsigned int);
if (num == 0)
return (_putchar('0'));
if (num < 1)
return (-1);
len = base_len(num, 2);
str = malloc(sizeof(char) * len + 1);
if (str == NULL)
return (-1);

for (i = 0; num > 0; i++)
{
if (num % 2 == 0)
str[i] = '0';
else
str[i] = '1';
num = num / 2;
}
str[i] = '\0';
rev_str = rev_string(str);
if (rev_str == NULL)
return (-1);
write_base(rev_str);
free(str);
free(rev_str);
return (len);
}
