#include "main.h"

/**
 * reverse_array - Reverses an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int tmp, idx;

	for (idx = n - 1; idx >= n / 2; idx--)
	{
		tmp = a[n - 1 - idx];
		a[n - 1 - idx] = a[idx];
		a[idx] = tmp;
	}
}
