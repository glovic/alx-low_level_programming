#include "main.h"

/**
 * _memcpy - Copies 'n' bytes from 'src' to 'dest'.
 * @dest: Pointer to the destination.
 * @src: Pointer to the source.
 * @n: Number of bytes to copy.
 * Return: A pointer to 'dest'.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx;
	char *area = dest;
	char *source = src;

	for (idx = 0; idx < n; idx++)
	{
		area[idx] = source[idx];
	}

	return (dest);
}
