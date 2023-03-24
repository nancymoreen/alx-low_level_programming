#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * @...: number of parameters
 * Return: Sum, or 0 otherwise
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int d;
	int sum = 0;
	va_list ap;

	va_start(ap, n);

	for (d = 0; d < n; d++)
		sum += va_arg(ap, int);
		va_end(ap);

		return (sum);
}
