#include "main.h"

int str_length(char *s);
int is_palindrome(char *s);
int check_palindrome(char *s, int len, int index);

/**
 * str_length - Get the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int str_length(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += str_length(s + 1);
	}

	return (len);
}

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if it's a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = str_length(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}

/**
 * check_palindrome - Helper function to check if a string is a palindrome.
 * @s: The input string.
 * @len: The length of the string.
 * @index: The current index being checked.
 *
 * Return: 1 if it's a palindrome, 0 if not.
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}
