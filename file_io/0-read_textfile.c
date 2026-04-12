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
 * Return: The actual number of characters printed.
 *         0 if filename is NULL, if the file cannot be opened or read,
 *         if write fails, or if memory allocation fails.
 *
 * Description:
 * This function opens the file in read-only mode, allocates a buffer of
 * size (letters + 1), reads up to @letters bytes, writes them to the
 * standard output, and returns the number of bytes successfully written.
 * All resources (file descriptor and buffer) are freed/closed in every
 * execution path to avoid leaks.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t line = 0, count = 0, i = 0;
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
	i = read(fd, buffer, letters);
	if (i <= 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	while (i > 0)
	{
		line = write(STDOUT_FILENO, buffer, i);
		if (line != i)
		{
			free(buffer);
			close(fd);
			return (0);
		}
		count = count + i;
		i = read(fd, buffer, letters);
	}
	free(buffer);
	close(fd);
	return (count);
}
