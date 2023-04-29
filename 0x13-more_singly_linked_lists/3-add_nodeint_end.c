#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end- adds a new node at the end of a listint_t list.
 * @head: pointer to listint_t
 * @n: data in new node
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	new = *head;

	end = malloc(sizeof(listint_t));

	if (end == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = end;
		return (end);
	}

	end->n = n;
	end->next = NULL;

	while (new->next != NULL)
	{
		new = new->next;
	}
	new->next = end;
	return (end);
}
