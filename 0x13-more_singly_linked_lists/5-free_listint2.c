#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to listint_t
 * Return: void
 *	Set head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
	}
}
