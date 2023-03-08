#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: input value
 * Return: factorial of n or
 * -1 if n is lower than 0, to indicater error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
