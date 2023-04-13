#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat- concatenates two strings.
 * @s1: first string
 * @s2:  second string
 * @n: number of bytes to be concatenated
 * Return: pointer to newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, len = 0;
	unsigned int j, len2 = 0;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		len2++;
	}
	if (n > len2)
	{
		n = len2;
	}
	p = malloc((len + n + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		p[len + j] = s2[j];
	}
	p[len + j] = '\0';
	return (p);
}
