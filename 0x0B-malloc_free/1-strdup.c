#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup- returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	int l = 0;
	int i;
	char *p = (char *)malloc(l * sizeof(char));

	for (i = 0; str[i] != '\0'; i++)
	{
		l++;
	}

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
	for (i = 0; i < l; i++)
	{
		p[i] = str[i];
	}
	}
	p[l + 1] = '\0';
	return (p);
}