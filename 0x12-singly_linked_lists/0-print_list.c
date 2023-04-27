#include "lists.h"
#include <stdio.h>

/**
 * print_list- prints all the elements of a list_t list.
 * @h: pointer to list_t
 * Return: elementd in a list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;


	while (h != NULL)
	{
		if (h->str == NULL)
		{
		printf("[0] (nil)");
		}
		else
		{
		printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}

	return (count);
}
