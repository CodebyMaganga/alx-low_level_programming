#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2- frees a node in listint_t
 * @head: pointer to a pointer head
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	while (*head != NULL)
	{
		p = (*head)->next;
		free(*head);
		(*head) = p;
	}
}
