#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Character:[%c]\n", 'H');
	printf("String:[%s]\n", "I am a string !");
	printf("Percent:[%%]\n");
	_printf("%");
	_printf("%s", NULL);
	_printf("% c", 'O');
	return (0);
}
