#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: int a
 * @b: int b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
