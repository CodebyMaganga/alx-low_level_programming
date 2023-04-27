#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Head of list_t
 * @str: new string at node
 *
 * Return: address of the new node or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *p;

	if (str == NULL)
	return (NULL);

	p = malloc(sizeof(list_t));
	if (p == NULL)
	return (NULL);

	p->str = strdup(str);
	if (p->str == NULL)
	{
	free(p);
	return (NULL);
	}

	p->len = strlen(str);
	p->next = *head;
	*head = p;

	return (p);
}

