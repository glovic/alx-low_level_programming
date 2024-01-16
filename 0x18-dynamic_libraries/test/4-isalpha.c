#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic character.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if @c is a letter (lowercase or uppercase), 0 otherwise.
 *
 * FYI: The standard library provides a similar function: isalpha.
 * Run 'man isalpha' to learn more.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
