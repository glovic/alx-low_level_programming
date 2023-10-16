#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints a specified number of elements from an integer array.
 *
 * @a: The array of integers.
 *
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		{
		printf("%d", a[index]);
		}

		if (index == n - 1)
		{
			continue;
		}

		printf(", ");
	}

	printf("\n");
}
