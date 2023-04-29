#include "lists.h"
/**
 * listint_len- returns the number of elements in a linked listint_t list.
 * @h: pointer to listint_t
 * Return: count of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *p = h;

	while (p != NULL)
	{
		count++;
		p = p->next;
	}
	return (count);
}
