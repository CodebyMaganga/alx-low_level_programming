#include <stdlib.h>
#include "lists.h"
/**
 * free_listint- frees memory in nodes
 * @head: pointer to listsint_t
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	new = head;

	while (new != NULL)
	{
		listint_t *p = new;

		new = new->next;
		free(p);
	}
}
