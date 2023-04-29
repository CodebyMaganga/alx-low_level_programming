#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint- adds a new node at the beginning of a listint_t list.
 * @head: pointer to listint_t
 * @n: data inside node
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p = malloc(sizeof(listint_t));

	if (p == NULL)
	{
		return (NULL);
	}

	p->n = n;
	p->next = *head;
	*head = p;
	return (p);
}
