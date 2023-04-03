#include "main.h"
/**
 * _strspn- calculates the length of a prefix substring
 * @s: string parameter
 * @accept: string parameter 2
 * Return: unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
			{
				count++;
				break;
			}
			p++;
		}
		if (*p == '\0')
		{
			return (count);
		}
		s++;
	}
	return (count);
}
