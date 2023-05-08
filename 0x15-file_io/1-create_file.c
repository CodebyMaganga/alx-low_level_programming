#include "main.h"
/**
 * create_file- creates a file
 * @filename: file created
 * @text_content: content inside file
 * Return: 1 on success, -1 on fsilure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, written, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		for (i = 0; text_content[i];)
			len++;

	fd = open(filename, O_CREATE | O_RDWR | O_TRUNC, 0600);
	written = write(fd, text_content, i);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);
	return (1);
}
