#include <stdio.h>
#include "lists.h"
/**
 *print_listint- prints all the elements of a listint_t list
 *@h: pointer to listint_t
 *Return: Count of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *p = h;

	if (h == NULL)
		return (NULL);

	while (p != NULL)
	{
		printf("%d\n", p->n);
		count++;
		p = p->next;
	}
	return (count);
}
