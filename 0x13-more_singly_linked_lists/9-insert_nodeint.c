#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a new position
 * @head: head of list
 * @idx: index of the list where the new node should be added
 * @n: node
 * Return: address of new node
 *	NULL if function fails
 *	if it is not possible to add the new node at index idx,
 *	do not add the new node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *to_insert;

	new = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx != 0)
	{
		to_insert = *head;

		for (i = 0; i < idx - 1 && to_insert != NULL; i++)
			to_insert = to_insert->next;

		if (to_insert == NULL)
			return (NULL);
	}

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = to_insert->next;

	to_insert->next = new;

	return (new);
}
