#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: integer
 */

int _atoi(char *s)
{
	int x, y, z, len, d, num;

	x = 0;
	y = 0;
	z = 0;
	len = 0;
	d = 0;
	num = 0;

	while (s[len] != '\0')
		len++;

	while (x < len && d == 0)
	{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			num = s[x] - '0';
			if (y % 2)
				num = -num;

		z = z * 10 + num;
		d = 1;
		if (s[x + 1] < '0' || s[x + 1] > '9')
			break;
		d = 0;
		}
		x++;
	}

	if (d == 0)
		return (0);

	return (z);
}
