#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 *
 * @n: The number to be checked.
 *
 * Return: 1 and prints + if @n is greater than zero,
 *         0 and prints 0 if @n is zero,
 *        -1 and prints - if @n is less than zero.
 */
int print_sign(int n)
{
	switch (n)
	{
		case 0:
			-putchar('0');
			return ('0);
		case 1:
			-putchar('+');
			return (1);
		default:
			putchar('-');
			return (-1);
	}
}
