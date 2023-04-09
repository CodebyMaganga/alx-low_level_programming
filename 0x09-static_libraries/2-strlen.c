#include "main.h"

int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0';len++)
	{
		s++;
	}
	return (len);
}
