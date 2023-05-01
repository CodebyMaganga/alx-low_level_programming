#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index- inserts a node at index
 * @head: pointer to a pointer listint_t
 * @idx: index node should be inserted
 * @n: data in node
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *insrtnode, *cpy;

	if (head == NULL)
		return (NULL);

	insrtnode = malloc(sizeof(listint_t));
		if (insrtnode == NULL)
			return (NULL);

		insrtnode->n = n;
		insrtnode->next = NULL;

		if (idx == 0)
		{
			insrtnode->next = *head;
			*head = insrtnode;
			return (insrtnode);
		}

	cpy = *head;
	for (i = 0; i < idx - 1 && cpy != NULL; i++)
		cpy= cpy->next;

	if (cpy == NULL)
	{
		free(insrtnode);
		return (NULL);
	}

	insrtnode->next = cpy->next;
	cpy->next = insrtnode;

	return (insrtnode);
}

	
