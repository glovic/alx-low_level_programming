#include "main.h"

/**
 * _strcpy - Copies a source string, including the terminating null byte,
 *           to a destination buffer.
 * @dest: The destination buffer to copy the string to.
 * @src: The source string to be copied.
 *
 * Return: A pointer to the destination buffer @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		{
		dest[index] = src[index];
		}
		index++;
	}

	dest[index] = '\0';

	return (dest);
}
