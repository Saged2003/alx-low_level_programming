#include "main.h"
/**
 *print_number - prints an integer.
 *only using the putchar function.
 *noarrays and pointers.
 *@n: integer to be printed.
 *
 *Return: void.
 */
void print_number(int n)
{
	int divisor = 1;
	int sign = 1;

	if (n < 0)
	{
		_putchar('-');
		sign = -1;
	}
	while (n / divisor / 10 != 0)
		divisor *= 10;
	while (divisor != 0)
	{
	       	_putchar((n / divisor) % 10 * sign + '0');
		divisor /= 10;
	}
}
