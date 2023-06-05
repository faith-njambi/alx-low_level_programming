#include "lists.h"

/**
 * pop_listint -deletes the head of a list
 *@head: pointer
 * Return: void
 */

int pop_listint(listint_t **head)
{
	listint_t *to_pop;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	to_pop = *head;

	*head = to_pop->next;

	n = to_pop->n;

	free(to_pop);

	return (n);
}
