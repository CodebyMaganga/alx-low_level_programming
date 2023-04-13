#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked- allocates memory
 * @b: memory size
 * Return: pointer to mem allocated
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
