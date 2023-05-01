#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2- frees a node in listint_t
 * @head: pointer to a pointer head
 */
void free_listint2(listint_t **head)
{
	listint_t *p = *head;

	while (p != NULL)
	{
		listint_t *copy = p;

		p = p->next;
		free(copy);
	}
	*head = NULL;
}
