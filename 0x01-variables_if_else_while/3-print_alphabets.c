#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c, n;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (n = 'A'; n <= 'Z'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
