#include "function_pointers.h"

/**
 * int_index - It searches for an integers in a array of integers.
 * @array: array of integers.
 * @size: size of the array.
 * @cmp: A function which compare values.
 *
 * Return: returns (-1) if no element match
 *	or when size is less then (0)
 *	retun pointer to the first corresponding element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (idx = 0; idx < size; idx++)
	{
		if (cmp(array[idx]) != 0)
		{
			return (idx);
		}
	}
	return (-1);
}
