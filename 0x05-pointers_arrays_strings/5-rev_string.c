#include "main.h"

/**
 * rev_string - Reverses the characters of a null-terminated string.
 * @s: The string to be reversed in-place.
 */
void rev_string(char *s)
{
	int len = 0, index = 0;
	char sch;

	while (s[index++])
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{
		sch = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = sch;
	}
}
