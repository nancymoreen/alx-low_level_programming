#include <stdio.h>
/**
 * main - prints lowercase alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c >= 'a'; c--)
		putchar(c);

	putchar('\n');

	return (0);
}