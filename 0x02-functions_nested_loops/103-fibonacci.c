#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n1, n2, next, sum;

	n1 = 1;
	n2 = 2;
	sum = 0;
	while (n1 < 4000000)
	{
		if (n1 % 2 == 0)
		{
			sum += n1;
		}
		next = n1 + n2;
		n1 = n2;
		n2 = next;
	}
	printf("%ld", sum);
	printf("\n");

	return (0);
}
