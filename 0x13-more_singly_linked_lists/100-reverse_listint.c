#include "lists.h"
/**
 * reverse_listint- reverse nodes in listint_t
 * @head: pointer to a pointer listint_t
 * Return: node in reversal
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prvs, *nxt, *cpy;

	prvs = NULL;
	nxt = NULL;
	cpy = *head;

	while (cpy != NULL)
	{
		nxt = cpy->next;
		cpy->next = prvs;
		prvs = cpy;
		cpy = nxt;
	}
	*head = prvs;
	return (*head);
}
