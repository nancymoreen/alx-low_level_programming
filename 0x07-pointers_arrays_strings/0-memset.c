#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @n: size of bytes to be changed
 * @s: memory area
 * @b: constant byte
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int d = 0;

	for (; n > 0; d++)
	{
		s[d] = b;
		n--;
	}
	return (s);
}
