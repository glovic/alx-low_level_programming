#include "main.h"

/**
 * _memset - Fills a block of memory with a specified byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The byte to fill the memory with.
 * @n: Number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area (s).
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int idx;
	char *mem = s;
	char var = b;

	for (idx = 0; idx < n; idx++)
	{
		mem[idx] = var;
	}

	return (mem);
}
