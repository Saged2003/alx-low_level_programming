#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i = 0;
	int len = 0;
	int j = 0;


	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	for (j = len - 1; j >= 0; j++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
