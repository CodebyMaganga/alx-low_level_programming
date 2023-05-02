#include "lists.h"
/**
 * find_listint_loop- finds a loop in lisint_t
 * @head: points to listint_t
 * Return: node address where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head, *second = head;

	while (first && second && second->next)
	{
		first = first->next;
		second = second->next->next;
		if (first == second)
		{
			first = second;
			break;
		}
	}
	if (!first || !second || !second->next)
		return (NULL);
	while (first != second)
	{
		first = first->next;
		second = second->next;
	}
	return (second);
}
