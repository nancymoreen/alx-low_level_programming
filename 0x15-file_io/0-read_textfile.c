#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a textfile and prints it to the POSIX stdout
 * @letters: The number of letters it should read and print
 * @filename: Text file to be read
 * Return: actual number of letters it could read and print, or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buf;
	ssize_t x;
	ssize_t y;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	y = read(fd, buf, letters);
	x = write(STDOUT_FILENO, buf, y);

	free(buf);
	close(fd);
	return (x);
}

