#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: number of bytes to be copied
 * @src: area from where memory is copied
 * @dest: area to where memory is to be stored
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
