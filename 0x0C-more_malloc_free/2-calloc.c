#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _calloc- function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of elements
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}
	memset(p, 0, nmemb * size);
	return (p);
}
