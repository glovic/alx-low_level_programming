#include "main.h"

/**
 * print_rev - Prints a string in reverse order.
 * @s: The null-terminated string to be printed in reverse.
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (s[len])
	{
		len++;
	}

	for (index = len - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}

	_putchar('\n');
}
