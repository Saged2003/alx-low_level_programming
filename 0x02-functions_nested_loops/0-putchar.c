#include "holberton.h"

/**
 * main - prints _putchar, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s[] = "_putchar\n";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(s[i]);
	}
	return (0);
}
