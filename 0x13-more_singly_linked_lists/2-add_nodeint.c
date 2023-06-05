#include "lists.h"

/**
 * add_nodeint - add a new node at start of listint_t list
 * @head: head of listint_t
 * @n: new node to be added
 * Return: NULL if function fails
 *	address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}


	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
