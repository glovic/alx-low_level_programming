#include "variadic_functions.h"
#include <stdarg.h>

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
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (index = 0; index < n; index++)
			sum = sum + va_arg(nums, unsigned int);
	}

	va_end(nums);

	return (sum);
}
