#include <stdio.h>
#include "lists.h"
/**
 *print_listint- prints all the elements of a listint_t list
 *@h: pointer to listint_t
 *Return: Count of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;
	const listint_t *p = h;

	while (p != NULL)
	{
		printf("%d\n", p->n);
		c++;
		p = p->next;
	}
	return (c);
}
