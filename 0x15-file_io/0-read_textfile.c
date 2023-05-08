#include "main.h"
/**
 * read_textfile- Write a function that reads a text file and prints it
 * @filename: file
 * @letters: Letters written
 * Return: Bytes written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *tmp;
	ssize_t written;
	ssize_t read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	tmp = malloc((sizeof(char)) * letters);
	if (tmp == NULL)
		close(fd);
		return (0);

	read = read(fd, tmp, letters);
	if (read == -1)
		free(tmp);
		close(fd);
		return (0);

	written = write(STDOUT_FILENO, tmp, read);
	if (written == -1 || written != read)
		free(tmp);
		close(fd);
		return (0);


		free(tmp);
		close(fd);
		return (written);
}
