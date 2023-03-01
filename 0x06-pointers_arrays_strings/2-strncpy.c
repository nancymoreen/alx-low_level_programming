#include "main.h"

/**
 * _strncpy - function that copies a string
 * @src: string to be copied from
 * @dest: string to be copied to
 * @n: number of char to be copied
 * Return: pointer at dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int d;

	d = 0;
	while (d < n && src[d] != '\0')
	{
		dest[d] = src[d];
		d++;
	}
	while (d < n)
	{
		dest[d] = '\0';
		d++;
	}

	return (dest);
}
