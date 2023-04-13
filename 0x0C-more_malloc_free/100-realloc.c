#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc- eallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: pointer to newly allocated space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p = NULL;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);

		if (p == NULL)
	{
			return (NULL);
	}
		return (p);
	}
	if (new_size <= old_size)
	{
		return (ptr);
	}
	p = malloc(new_size);

	if (p == NULL)
	{
		return (NULL);
	}
	memcpy(p, ptr, old_size);
	free(ptr);
	return (p);
}
