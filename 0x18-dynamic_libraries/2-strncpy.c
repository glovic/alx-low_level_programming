#include "main.h"

/**
 * _strncpy - Copies at most 'n' bytes from the 'src' string into 'dest'.
 * @dest: The destination buffer to store the string copy.
 * @src: The source string to be copied.
 * @n: The maximum number of bytes to be copied from 'src'.
 *
 * Return: A pointer to the resulting string 'dest'.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int idx = 0, len = 0;

	while (src[idx++])
	{
		len++;
	}

	for (idx = 0; src[idx] && idx < n; idx++)
		dest[idx] = src[idx];

	for (idx = len; idx < n; idx++)
		dest[idx] = '\0';

	return (dest);
}
