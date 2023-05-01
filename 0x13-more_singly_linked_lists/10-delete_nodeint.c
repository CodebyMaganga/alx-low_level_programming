#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index- deletes a node at given index
 * @head: pointer to listsint_t
 * @index: index
 * Return: integer 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prv_cpy, *delete_cpy;
	unsigned int i;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}

	delete_cpy = *head;
	prv_cpy = NULL;

	if (index == 0)
	{
		*head = delete_cpy->next;
		free(delete_cpy);
		return (1);
	}

	for (i = 0; delete_cpy != NULL && i < index; i++)
	{
		prv_cpy = delete_cpy;
		delete_cpy = delete_cpy->next;
	}

	if (delete_cpy == NULL)
	{
		return (-1);
	}
		prv_cpy->next = delete_cpy->next;
		free(delete_cpy);

		return (1);
}
