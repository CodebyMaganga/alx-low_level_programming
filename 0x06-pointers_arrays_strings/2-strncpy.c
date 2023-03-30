#include "main.h"
/**
 * _strncpy- copy a string
 *
 * @dest: string to be copied into
 * @src: string to be copied
 * @n: number of characters to be copied
 * Return: character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
