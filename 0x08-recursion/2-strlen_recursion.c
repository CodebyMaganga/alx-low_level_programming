#include "main.h"
/**
 * _strlen_recursion- finds length of string
 * @s: calculate length of this string
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
