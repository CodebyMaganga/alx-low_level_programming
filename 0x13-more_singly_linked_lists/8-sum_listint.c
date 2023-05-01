#include "lists.h"
/**
 * sum_listint- returns sum of all the data (n)
 * @head: pointer to listint_t
 * Return: Sum of data in listint_t
 */
int sum_listint(listint_t *head)
{
	int addtn = 0;
	listint_t *copy = head;

	while (copy != NULL)
	{
		addtn = addtn + copy->n;
		copy = copy->next;
	}
	return (addtn);
}
