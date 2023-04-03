#include "main.h"
/**
 * _memcpy- copies memory area
 *
 * @dest: area to be copied into
 * @src: area to be copied
 * @n: number of bytes to be copied
 * Return: dest string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
