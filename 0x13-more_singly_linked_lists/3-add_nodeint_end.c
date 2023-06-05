#include "lists.h"

/**
 * add_nodeint_end - add a new node at end of listint_t list
 * @head: head of listint_t
 * @n: node to add
 * Return: NULL if function fails
 *	address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	new = malloc(sizeof(listint_t));
	if (head == NULL)
		return (NULL);

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}

	return (new);
}
