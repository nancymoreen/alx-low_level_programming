#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed on to it
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);

	return (0);
}
