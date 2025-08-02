#include "main.h"
/**
 * append_text_to_file  - function that appends text at the end of a file
 * @filename: Name of the file to read
 * @text_content: content of the text
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int w = 0;
	int len = 0;

	if (filename == NULL)
	{
	return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (text_content != NULL)
	{
	while (text_content[len] != '\0')
	{
	len++;
	}

	w = write(fd, text_content, len);
	if (w == -1)
	{
	close(fd);
	return (-1);
	}

	}

	close(fd);
	return (1);
}

