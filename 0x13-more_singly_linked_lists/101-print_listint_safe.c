#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe- prints listint_t
 * @head: pointer to listint_t
 * Return: no.of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *cpy, *sub;
	size_t n = 0;

	if (head == NULL)
		return (0);

	cpy = head;
	while (cpy != NULL)
	{
		printf("[%p], %d\n", (void *)cpy, cpy->n);
		n++;
		sub = cpy->next;

		if (sub >= cpy)
		{
			printf("[%p], %d\n", (void *)cpy, cpy->n);
			n++;
			break;
		}
		cpy = sub;
	}
	if (cpy == NULL)
		return (n);
	else
	{
		exit(98);
	}

}
