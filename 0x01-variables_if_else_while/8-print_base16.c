#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	int d;
	char c;

	for (d = 0; d < 10; d++)
		putchar((d % 10) + '0');

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
