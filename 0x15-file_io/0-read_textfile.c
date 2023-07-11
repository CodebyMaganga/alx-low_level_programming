#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- read characters in a file
 * @filename: file being opened
 * @letters: letters to be read
 * Return: bytes read 0r 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t descriptor;
	ssize_t bytesRead;
	ssize_t writtenBytes;

	descriptor = open(filename, O_RDONLY);
	if (descriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	writtenBytes = read(descriptor, buffer, letters);
	bytesRead = write(STDOUT_FILENO, buffer, writtenBytes);

	free(buffer);
	close(descriptor);
	return (bytesRead);
}

