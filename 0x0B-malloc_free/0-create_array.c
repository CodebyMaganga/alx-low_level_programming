#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array- creates an array of char & initializes with a specific char
 * @size: size of the memory to print
 * @c: character to be filled
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *p = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
	}
		return (p);
}
