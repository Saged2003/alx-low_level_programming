#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints a[2] = 98, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = malloc(5 * sizeof(int));
	p[0] = 98;
	p[1] = 198;
	p[2] = 298;
	p[3] = 398;
	p[4] = 498;
	*(a + 2) = *p; /* This is the line of code that I have added */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
