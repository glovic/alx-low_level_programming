#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string in dynamically-allocated memory.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the duplicated string, or NULL on failure.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int idx, len = 0;

	if (str == 0)
	{
		return (NULL);
	}

	for (idx = 0; str[idx]; idx++)
	{
		len++;
	}

	duplicate = malloc(sizeof(char) * (len + 1));

	for (idx = 0; str[idx]; idx++)
	{
		duplicate[idx] = str[idx];
	}

	duplicate[len] = '\0';

	return (duplicate);
}
