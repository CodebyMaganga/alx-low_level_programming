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
	listint_t *first, *end;

	if (head == NULL)
		return (NULL);

	first = malloc(sizeof(listint_t));

	if (first == NULL)
		return (NULL);

	first->n = n;
	first->next = NULL;

	if (*head == NULL)
		*head = first;
	else
	{
		end = *head;

		while (end->next != NULL)
		end = end->next;
		end->next = first;
	}

	return (*head);
}
