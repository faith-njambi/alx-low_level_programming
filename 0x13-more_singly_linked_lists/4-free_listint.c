#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to listint_t
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
