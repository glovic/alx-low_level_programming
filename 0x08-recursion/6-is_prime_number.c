#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: If the number is not prime - 0.
 *         If the number is prime - 1.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n == 2 || n == 3)
		return (1);

	if (n % 2 == 0)
		return (0);

	for (int i = 3; i * i <= n; i += 2)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}
