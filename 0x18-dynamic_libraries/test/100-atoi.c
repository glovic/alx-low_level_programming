#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string containing the integer to be converted.
 *
 * Return: The integer value extracted from the string.
 */
int _atoi(char *s)
{
	int signs = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			signs *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);

	return (num * signs);
}
