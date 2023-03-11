#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product  of two numbers
 * If the program does not receive two arguments, your program
 * should print Error, followed by a new line, and return 1
 * @argc: arguments count
 * @argv: argument vector
 * Return: Success 0, else 1
 */

int main(int argc, char *argv[])
{
	int n1 = 0;
	int n2 = 0;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

