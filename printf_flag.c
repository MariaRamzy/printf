#include "main.h"

/**
 * get_flag - flag characters for non-custom conversion specifiers
 * @f: flag of character
 * Return: 1
 */
int get_flag(char *f)
{
	
	switch (*f)
	{
		case '+':
			printf("%+", '+');
			break;
		case ' ':
			printf("%%", ' ');
			break;
		case '#':
			printf("%#", '#');
			break;
	}
	return (1);
}
