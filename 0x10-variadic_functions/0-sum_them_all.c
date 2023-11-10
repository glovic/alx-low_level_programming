#include "variadic_functions.h"

/**
 * sum_them_all - The sum of all it's parameters.
 * @n: Number of passed parameters.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: if n == 0 - 0.
 *      Otherwise - sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum, digits;
	va_list numbers;

	if (n == 0)
		return (0);

	va_start(numbers, n);

	sum = 0;
	digits = n;
	while (digits--)
		sum += va_arg(numbers, int);
	va_end(numbers);

	return (sum);
}
