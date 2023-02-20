#include <stdio.h>
/**
 * main - prints the smallest combination of two digits
 * Return: Always 0
 */
int main(void)
{
	int d;
	int n;

	for (d = '0'; d < 9; d++)
	{
	for (n = d + 1; n < 10; d++)
	{
	putchar((d % 10) + '0');
	putchar((n % 10) + '0');

	if (d == 8 && n == 9)
	continue;

	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
