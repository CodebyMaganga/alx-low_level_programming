#include "main.h"
/**
 * append_text_to_file- adds text at end of file
 * @filename: file created
 * @text_content: text inside file
 * Return: 1 on success, -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int written, op, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		for (i = 0; text_content[i];)
			i++;

	op = open(filename, O_WRONLY | O_APPEND);
	written = write(op, text_content, i);

	if (op == -1 || written == -1)
		return (-1);

	close(op);
	return (1);
}
