#include "main.h"
/**
 * _memset- fills memory with constant byte
 *
 * @s: string parameter
 * @b: character to be filled
 * @n: no. of bytes to be filled
 * Return: character
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
