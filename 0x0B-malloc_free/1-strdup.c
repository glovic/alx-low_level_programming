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
	int index, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (index = 0; str[index]; index++)
	{
		duplicate[index] = str[index];
	}

	duplicate[len] = '\0';

	return (duplicate);
}
