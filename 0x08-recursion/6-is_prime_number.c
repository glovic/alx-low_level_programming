#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - Check if a number is divisible.
 * @num: The number to check.
 * @div: The divisor.
 *
 * Return: 0 if divisible, 1 if not.
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to check.
 *
 * Return: 0 if not prime, 1 if prime.
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_divisible(n, div));
}
