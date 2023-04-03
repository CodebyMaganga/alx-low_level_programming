#include "main.h"
#include <stddef.h>
/**
 * _strchr- locates a character in string
 *
 * @s: string parameter
 * @c: character to be located
 * Return: character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
