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
		case 1:
			_putchar('+');
			return (1);
		case 0:
			_putchar('0');
			return (0);
		default:
			_putchar('-');
			return (-1);
	}
}
