#include <stdio.h>
/**
 * main - prints single digit numbers starting from 0
 * Return: Alway 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar(n);

	putchar('\n');

	return (0);
}
