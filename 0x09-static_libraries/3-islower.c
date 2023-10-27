#include "main.h"
/**
 * _islower - Checks if a character is lowercase.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if @c is a lowercase character, 0 otherwise.
 *
 * FYI: The standard library provides a similar function: islower.
 * Run 'man islower' to learn more.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
