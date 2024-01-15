#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The set of characters to be counted as prefix.
 *
 * Return: The number of bytes at the beginning of @s
 *         that consist only of characters in @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int idx;

	while (*s)
	{
		for (idx = 0; accept[idx]; idx++)
		{
			if (*s == accept[idx])
			{
				bytes++;
				break;
			}

			else if (accept[idx + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
