#include "main.h"

/**
 * print_triangle - prints a triangle of size n
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;


	if (size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size - i; j++)
			{
				_putchar(' ');
			}
			for (int k = 0; k < i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
