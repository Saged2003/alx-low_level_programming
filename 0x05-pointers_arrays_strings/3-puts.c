#include <unistd.h>

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: the string to print
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\n'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
