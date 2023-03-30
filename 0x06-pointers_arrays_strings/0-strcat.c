#include "main.h"
/**
 *_strcat- concatenates two strings
 *
 * @dest: the string to be appended to
 * @src: the string to be appended
 * Return: dest string
 */
char *_strcat(char *dest, char *src)
{
	int dlength = 0;
	int srclength = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dlength++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		srclength++;
	}
	for (i = 0; i <= srclength; i++)
	{
		dest[dlength+i] = src[i];
	}
	return (dest);
}
