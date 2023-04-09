#include "main.h"

char *_strcat(char *dest, char *src)
{
	int i, len = 0;

	for (i = 0; dest[i] != '\0'; len++);
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	return (dest);
}
