#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr -  concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string, or NULL
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i = 0, j = 0, k = 0, l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][j])
		{
			l++;
			j++;
		}
		j = 0;
		i++;
	}
	s = malloc(l * sizeof(char) + ac + 1);
	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			s[k] = av[i][j];
			k++;
			j++;
		}
		s[k] = '\n';
		j = 0;
		k++;
		i++;
	}
	k++;
	s[k] = '\0';
	return (s);
}
