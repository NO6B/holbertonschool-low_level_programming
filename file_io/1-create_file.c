#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * create_file - Creates a file with rw-------
 * @filename: Name of the file to create.
 * @text_content: NULL-terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int w = 0;
	int len = 0;

	if (filename == NULL)
	{
	return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
	return (-1);
	}

	if (text_content != NULL)
	{
	while (text_content[len])
	{
	len++;
	}
	w = write(fd, text_content, len);
	if (w == -1)
	{
	return (-1);
	}

	}
	close(fd);
	return (1);
}

