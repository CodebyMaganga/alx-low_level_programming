#include "main.h"
/**
 *_strcat- concatenates two strings
 *
 * @dest: the string to be appended to
 * @src: the string to be appended
 * @n: number of characters to be appended
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int i;

	while (dest[destlen] != '\0')
	{
		destlen++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, destlen++)
	{
		dest[destlen] = src[i];
	}
	dest[i] = '\0';
	return(dest);
}
