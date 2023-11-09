#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - The sum of all it's parameters.
 * @n: Number of passed parameters.
 *
 * Return: if n == 0 - 0.
 *	Otherwise - sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list digits;
	unsigned int idx, sum = 0;

	va_start(digits, n);

	for (idx = 0; idx < n; idx++)
		sum += va_arg(digits, int);

	va_end(digits);

	return (sum);
}
