#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: pointer to header
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *temp;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	head = NULL;
}
