#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string copy
 * Return: duplicate string or NULL
 */

char *_strdup(char *str)
{
	char *s;
	int x = 0;
	int y = 1;

	if (str == NULL)
		return (NULL);

	while (str[y])
	{
		y++;
	}

	s = (char *)malloc(y * sizeof(char) + 1);

	if (s == NULL)
		return (NULL);

	while (x < y)
	{
		s[x] = str[x];
		x++;
	}

	s[x] = '\0';
	return (s);
}
