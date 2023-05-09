#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads and prints from a file
 * @filename: way to file
 * @letters: characters to read
 * Return: characters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int bc;
	char *buff;
	ssize_t bytes, w;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (bc == -1)
	{
		close(bc);
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		close(bc);
		return (0);
	}

	bytes = read(bc, buff, letters);

	if (bytes == -1)
	{
		close(bc);
		free(buff);
		return (0);
	}

	w = write(STDOUT_FILENO, buff, bytes);

	if (w == -1)
	{
		close(bc);
		free(buff);
		return (0);
	}
	close(bc);
	return (bytes);
}
