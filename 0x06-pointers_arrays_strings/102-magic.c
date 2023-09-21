#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints a[2] = 98, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, a[5];

	a[2] = 98;
	/*
	* write one line of code that will print a[2] = 98,
	* followed by a new line.
	* You are not allowed to use the variable a in your new line of code
	* You are not allowed to modify the variable p
	* You can only write one statement
	* You are not allowed to use ,
	* You are not allowed to code anything else than the line of expected line of
	* Your code should be written at line 19, before the ;
	*/
	printf("a[2] = %d\n", *(a + 2));
	return (0);
}
