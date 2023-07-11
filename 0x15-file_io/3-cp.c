#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *make_buffer(char *file);
void closefile(int fd);

/**
 * make_buffer - Allocate 1024 bytes for a buffer.
 * @file: name of file
 *
 * Return: ptr to new buffer
 */
char *make_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * closefile - Close filedescriptor
 * @fd: file descriptor closed.
 */
void closefile(int fd)
{
	int i;

	i = close(fd);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies files
 * @argc: argument counter
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 if successful
 *
 * Description: incorrect argument - exit code 97.
 *              none existing file/ file cant be read - exit code 98.
 *              file cannot be created or written to - exit code 99.
 *              file cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, readf, writef;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = make_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	readf = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || readf ==  -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		writef = write(to, buffer, readf);
		if (to == -1 || writef == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		readf = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (readf > 0);

	free(buffer);
	closefile(from);
	closefile(to);

	return (0);
}

