#include "main.h"

/**
 * _strncat - Concatenates n bytes from src to dest.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to concatenate.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int currentIndex = 0, destinationLength = 0;

	while (dest[currentIndex++])
		destinationLength++;

	for (currentIndex = 0; src[currentIndex] && currentIndex < n; currentIndex++)
		dest[destinationLength++] = src[currentIndex];

	return (dest);
}
