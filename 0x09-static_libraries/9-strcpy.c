#include "main.h"

/**
 * _strcpy - copies the string pointed to by the src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;

	while (*(src + l) != '\0')
	{
		*(dest + l) = *(src + l);
		l++;
	}

	*(dest + l) = '\0';
	return (dest);
}
