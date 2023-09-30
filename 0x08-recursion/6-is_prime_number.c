#include "main.h"
#include <stdio.h>

/**
 * _is_prime - helper function to check if n is prime
 * @n: the number to check
 * @i: the possible divisor
 * Return: 1 if n is prime, 0 otherwise
 */

int _is_prime(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (i > n / 2)
	{
		return (1);
	}
	return (_is_prime(n, i + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: the number to check
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (_is_prime(n, 2));
}
