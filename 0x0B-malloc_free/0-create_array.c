#include "main.h"
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of argument pointers.
 *
 * Return: 0 on success, 1 if there are non-digit symbols.
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
