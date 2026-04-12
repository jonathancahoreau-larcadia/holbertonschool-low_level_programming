#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0 on success, exits with codes on error
 */
int main(int argc, char *argv[])
{
	int r, w, fd_to, fd_from;
	char *buffer;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == (-1))
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
		argv[1]), exit(98);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd_to == (-1))
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]), exit(99);
	buffer = malloc((1024 * sizeof(char)));
	if (!buffer)
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]), exit(99);
	r = read(fd_from, buffer, 1024);
	if (r == (-1))
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
		argv[1]), free(buffer), exit(98);
	while (r > 0)
	{
		w = write(fd_to, buffer, r);
		if (w != r)
			free(buffer), dprintf(STDERR_FILENO,
			 "Error: Can't write to file %s\n", argv[2]), exit(99);
		r = read(fd_from, buffer, 1024);
		if (r == (-1))
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), free(buffer), exit(98);
	}
	free(buffer);
	if (close(fd_from) == (-1))
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == (-1))
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
return (0);
}
