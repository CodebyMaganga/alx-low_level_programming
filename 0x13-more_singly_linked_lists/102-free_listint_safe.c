#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe- frees listint_t
 * @h: pointer to a pointer pointing to lisint_t
 * Return: size of node
 */
size_t free_listint_safe(listint_t **h)
{
	size_t n = 0;
	listint_t *cpy, *sub;

	if (h == NULL || *h == NULL)
		return (0);

	cpy = *h;
	*h = NULL;

	while (cpy != NULL)
	{
		n++;
		if (cpy <= cpy->next)
		{
			free(cpy);
			break;
		}
		sub = cpy;
		cpy = cpy->next;
		free(sub);
	}

	return (n);
}

