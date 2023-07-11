#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * read_textfile - reads characters in a file
 * @filename: index filename
 * @letters: size of leters
 * Return: bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}

	FILE *fileptr = fopen(filename, 'r');

		if (fileptr == NULL)
		{
			return (0);
		}

	char *buffer = malloc(letters + 1);

	if (buffer == NULL)
	{
		fclose(fileptr);
		return (0);
	}

	ssize_t bytesRead = fread(buffer, sizeof(char), letters, fileptr);

	if (bytesRead < 0)
	{
		fclose(fileptr);
		free(buffer);
		return (0);
	}

	buffer[bytesRead] = '\0';

	ssize_t writtenBytes = fwrite(buffer, sizeof(char), bytesRead, stdout);

	if (writtenBytes < 0 || writtenBytes != bytesRead)
	{
		fclose(fileptr);
		freee(buffer);
		return (0);
	}

	fclose(fileptr);
	free(buffer);

	return (bytesRead);
}




