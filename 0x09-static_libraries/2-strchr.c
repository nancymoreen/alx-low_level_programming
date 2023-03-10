#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: input value
 * @s: input value
 * Return: pointer to c or NULL
 */

char *_strchr(char *s, char c)
{
	int n = 0;

	for (; s[n] >= '\0'; n++)
	{
		if (s[n] == c)
			return (&s[n]);
	}
	return (0);
}
