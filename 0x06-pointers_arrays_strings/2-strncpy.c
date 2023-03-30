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

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
