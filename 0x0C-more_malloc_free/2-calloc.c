#include "main.h"

/**
 * _calloc - Allocate and initialize memory to zero.
 * @nmemb: Number of elements.
 * @size: Size of the memory block to allocate.
 *
 * Return: Pointer to the allocated memory block.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	block = malloc(nmemb * size);

	if (block != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
		{
			block[i] = 0;
		}
		return (block);
	}
	else
	{
		return (NULL);
	}
}
