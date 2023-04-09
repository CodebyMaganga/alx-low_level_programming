#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; dest [i] != '\0'; i++)
	{
		dest[i] = src [i];
	}
	return (dest);
}
