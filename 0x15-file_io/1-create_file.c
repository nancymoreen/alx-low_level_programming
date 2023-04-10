#include "main.h"

/**
 * create_file - Creates a file
 * @filename: The file to be created
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fp, x, y;

	y = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (y = 0; text_content[y];)
			y++;
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(fp, text_content, y);

	if (fp == -1 || x == -1)
		return (-1);

	close(fp);
	return (1);
}

