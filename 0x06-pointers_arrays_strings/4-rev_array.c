#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @n: number of elements of the array
 * @a: array
 * Return: reverse
 */

void reverse_array(int *a, int n)
{
	int i;
	int d;

	for (i = 0; i < n; i++)
	{
		n--;
		d = a[i];
		a[i] = a[n];
		a[n] = d;
	}
}
