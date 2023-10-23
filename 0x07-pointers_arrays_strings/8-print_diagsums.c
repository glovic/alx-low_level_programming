#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints sums of diagonals in a square matrix of integers.
 * @a: Square matrix to be summed.
 * @size: Size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int idx, sum1 = 0, sum2 = 0;

	for (idx = 0; idx < size; idx++)
	{
		sum1 += a[idx];
		a += size;
	}

	a -= size;

	for (idx = 0; idx < size; idx++)
	{
		sum2 += a[idx];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
