#include "main.h"

/**
 * _strstr - locates a substring
 * @needle: input value
 * @haystack: input value
 * Return: pointer to beginning of substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *c = needle;

		while (*a == *c && *c != '\0')
		{
			a++;
			c++;
		}
		if (*c == '\0')
			return (haystack);
	}
	return (0);
}
