#include "main.h"

/**
 * get_flag - flag characters for non-custom conversion specifiers
 * @f: input
 * Return: 1
 */
int get_flag(char *f)
{
	switch (*f)
	{
		case '+':
			plus_flag = 1;
			break;
		case ' ':
			space_flag = 1;
			break;
		case '#':
			hashtag_flag = 1;
			break;
		case '0':
			zero_flag = 1;
			break;
		case '-':
			minus_flag = 1;
			break;
	}
	return (1);
}
