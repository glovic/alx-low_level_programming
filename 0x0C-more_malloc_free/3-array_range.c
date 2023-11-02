#include "main.h"
#include <stdlib.h>

/**
 * array_range - Create an array of ordered integers from min to max.
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: A pointer to the new array or NULL on failure.
 */
int *array_range(int min, int max)
{
	int *array, idx, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (idx = 0; idx < size; idx++)
	{
		array[idx] = min++;
	}

	return (array);
}
