#include "main.h"

/**
 * _strstr - Locate a substring in a string.
 * @haystack: The string to search.
 * @needle: The substring to find.
 *
 * Return: Pointer to the found substring, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int idx;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		idx = 0;

		if (haystack[idx] == needle[idx])
		{
			do {
				if (needle[idx + 1] == '\0')
					return (haystack);

				idx++;

			} while (haystack[idx] == needle[idx]);
		}

		haystack++;
	}

	return ('\0');
}
