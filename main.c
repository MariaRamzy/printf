#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	_printf("Let's print a simple sentence.\n");
	printf("Let's print a simple sentence.\n");
	_printf("%s", "I am a string !\n");
	printf("%s", "I am a string !\n");
	_printf("%c\n", 'H');
	printf("%c\n", 'H');
	_printf("%%\n");
	printf("%%\n");
}
