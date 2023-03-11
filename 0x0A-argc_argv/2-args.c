#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * all arguments should be printed, including the first one
 * only print one argument per line, ending with a new line
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}

