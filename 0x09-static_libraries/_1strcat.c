#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int i, len = 0;

	for (i = 0; dest[i] != '\0'; len++);

	for (i = 0; src[i] < n; i++)
	{
		dest[len + i] = src[i];
	}
	return (dest);
}
