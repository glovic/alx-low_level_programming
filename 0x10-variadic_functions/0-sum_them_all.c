#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - The sum of all it's parameters.
 * @n: Number of passed parameters.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: if n == 0 - 0.
 *	Otherwise - sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int idx; 
	int sum = 0;
	va_list digits;

	va_start(digits, n);

	if (n != 0)
	{
	for (idx = 0; idx < n; idx++)
		sum += va_arg(digits, int);
	}
	va_end(digits);

	return (sum);
}
