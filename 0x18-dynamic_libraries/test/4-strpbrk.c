#include "main.h"

/**
 * _strpbrk - Search a string for bytes in a set.
 * @s: The string to search.
 * @accept: The set of bytes to find.
 *
 * Return: Pointer to the matching byte, or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int idx;

	while (*s)
	{
		for (idx = 0; accept[idx]; idx++)
		{
			if (*s == accept[idx])
				return (s);
		}

		s++;
	}

	return ('\0');
}
