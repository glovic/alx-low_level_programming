#include "main.h"

/**
 * _strchr - Find the first occurrence of a character in a string.
 * @s: The string to search.
 * @c: The character to locate.
 * Return: Pointer to the first occurrence or NULL.
 */
char *_strchr(char *s, char c)
{
	int idx;

	for (idx = 0; s[idx] >= '\0'; idx++)
	{
		if (s[idx] == c)
		{
			return (s + idx);
		}
	}

	return ('\0');
}
