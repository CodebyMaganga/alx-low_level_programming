#include "main.h"

/**
 * append_text_to_file - Add text at the end of a file.
 * @filename: ptr to new file
 * @text_content: ptr to added text
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, writebytes, n = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (n = 0; text_content[n];)
			n++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	writebytes = write(i, text_content, n);

	if (i == -1 || writebytes == -1)
		return (-1);

	close(i);

	return (1);
}

