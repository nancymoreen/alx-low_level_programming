#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximmum value
 * Return: pointer to newly created array, or NULL
 */

int *array_range(int min, int max)
{
	int *a, n = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[n] = min;
		n++;
		min++;
	}

	return (a);
}
