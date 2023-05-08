#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * main- entry point
 * @argc: argumnet count
 * @argv: pointer to first argument
 * Result: 0
 */
int main(int argc, char *argv[]) {
	int descriptor_from, descriptor_to, result;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	descriptor_from = open(argv[1], O_RDONLY);
	if (descriptor_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	descriptor_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (descriptor_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
 
	while ((result = read(descriptor_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(descriptor_to, buffer, result) != result)
		{
            		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            		exit(99);
		}
	}

	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(descriptor_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", descriptor_from);
		exit(100);
	}

	if (close(descriptor_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", descriptor_to);
		exit(100);
	}

	return 0;
}

