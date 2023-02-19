#include <stdio.h>
/**
 * main - prints single digit numbers starting from 0
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar((n % 10) + '0');

	putchar('\n');

	return (0);
}
