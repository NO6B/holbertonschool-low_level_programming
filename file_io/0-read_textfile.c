#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - function that reads a text file and
 * @filename: Name of the file to read
 * @letters: Number of letters to read and print
 * Return: Actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r;
	ssize_t w;
	char *buffer;

	if (filename == NULL)
	{
	return (0);
	}

	fd = open(filename, O_RDONLY);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
	return (0);
	}

	r = read(fd, buffer, letters);
	if (r == -1)
	{
	return (0);
	}

	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
	{
	return (0);
	}

	close(fd);

	return (w);
}

