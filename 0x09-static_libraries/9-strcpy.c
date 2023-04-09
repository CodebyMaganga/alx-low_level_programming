#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	
	for (; dest[i] != '\0'; dest++);
	for (; src[i] < n; src++)
	{
		dest[i] = src[i];
	}
}
	
