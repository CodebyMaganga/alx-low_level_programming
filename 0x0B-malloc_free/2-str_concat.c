#include "main.h"
#include <stdlib.h>
/**
 * str_concat- concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: pointer to s1
 */
char *str_concat(char *s1, char *s2)
{
	
	int len1 = 0;
	int len2 = 0;
	int i;
	char *p = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if ( s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		p[len1 + i] = s2[i];
	}
	p[len1 + len2] = '\0';
	return (p);
}
