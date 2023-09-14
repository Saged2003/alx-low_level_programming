#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0 (Success)
 */
int main (void)
{
	int i;
	long int n1, n2, next;

	n1 = 1;
	n2 = 2;
	printf("%ld", n1);
	printf(", ");
	printf("%ld", n2);
	for (i = 3; i <= 50; i++)
	{
		next = n1 + n2;
		printf(", ");
		printf("%ld", next);
		n1 = n2;
		n2 = next;
	}
	printf("\n");
	return (0);
}
