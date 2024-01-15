#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return:
 *   - An integer less than 0 if s1 is lexicographically less than s2.
 *   - 0 if s1 is equal to s2.
 *   - An integer greater than 0 if s1 is lexicographically greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
