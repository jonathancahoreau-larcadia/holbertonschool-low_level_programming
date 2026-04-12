#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to STDOUT.
 * @filename: Name of the file to read.
 * @letters: Maximum number of characters to read and print.
 *
 * Return: Number of characters printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w;
	int fd;
	char *buffer;

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == (-1))
		return (0);
	buffer = malloc((letters + 1) * sizeof(char));
	if (!buffer)
		return (0);
	r = read(fd, buffer, letters);
	if (r <= 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	free(buffer);
	close(fd);
	if (w != r)
		return (0);
	return (w);
}
