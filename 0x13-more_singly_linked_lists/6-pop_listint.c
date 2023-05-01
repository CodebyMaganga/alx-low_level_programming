#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint- deletes the head node of listint_t and returns the head node’s data
 * @head: pointer to pointer of listint_t
 * Return: data at node
 */
int pop_listint(listint_t **head)
{
	listint_t *copy;
	int cpy_n;

	if (*head == NULL)
		return (0);

	cpy_n = (*head)->n;
	copy = *head;
	*head = (*head)->next;
	free(copy);

	return (cpy_n);
}
