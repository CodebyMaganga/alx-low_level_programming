#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index- returns the nth node of listint_t
 * @head: pointer to listint_t
 * @index: index of node searched
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *cpy = head;

	while (cpy != NULL && n < index)
	{
		cpy = cpy->next;
		n++;
	}

	if (n == index && cpy != NULL)
	{
		return (cpy);
	}
	else
	{
		return (NULL);
	}
}
