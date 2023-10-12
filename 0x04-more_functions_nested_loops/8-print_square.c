#include "main.h"

/**
 * print_square - Prints a square composed of the '#' character.
 * @size: The size of the square (number of rows and columns).
 */
void print_square(int size)
{
	int sideLength, squareSize;

	if (size > 0)
	{
		for (sideLength = 0; sideLength < size; sideLength++)
		{
			for (squareSize = 0; squareSize < size; squareSize++)
				_putchar('#');

			if (sideLength == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
