#include "main.h"

/**
 * print_line - Prints a horizontal line composed of underscore characters.
 * @n: The number of underscore characters to be printed.
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}

	_putchar('\n');
}
