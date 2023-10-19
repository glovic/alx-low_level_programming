#include "main.h"

/**
 * string_toupper - Converts lowercase letters to uppercase in a string.
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
