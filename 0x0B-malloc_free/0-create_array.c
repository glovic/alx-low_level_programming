#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create and initialize an array of characters.
 * @size: Size of the array to create.
 * @c: Char to initialize the array with.
 *
 * Return: A pointer to the array, or NULL on failure.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int idx;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (idx = 0; idx < size; idx++)
	{
		array[idx] = c;
	}

	return (array);
}
