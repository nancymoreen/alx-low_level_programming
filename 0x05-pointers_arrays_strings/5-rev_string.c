#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	char rvs = s[0];
	int c = 0;
	int x;

	while (s[c] != '\0')
		c++;
	for (x = 0; x < c; x++)
	{
		c--;
		rvs = s[x];
		s[x] = s[c];
		s[c] = rvs;
	}
}
