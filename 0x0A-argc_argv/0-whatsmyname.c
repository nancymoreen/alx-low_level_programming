#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * if you rename the program, it will print the new name, without having
 * to compile it again
 * @argc: count of arguments
 * @argv: vector (array) of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);

	return (0);
}
