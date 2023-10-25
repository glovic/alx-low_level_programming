#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		return (1 + _strlen_recursion(s + 1));
	}

	return (length);
}
