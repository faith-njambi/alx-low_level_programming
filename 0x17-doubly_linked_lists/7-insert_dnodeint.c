#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head
 * @idx: position to add
 * @n: Value
 * Return: adress of the new node, null on fail
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	unsigned int i;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *h;
		newNode->prev = NULL;
		if (*h != NULL)
			(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}

	current = *h;
	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			free(newNode);
			return (NULL);
		}
		current = current->next;
	}

	newNode->next = current->next;
	newNode->prev = current;
	if (current->next != NULL)
		current->next->prev = newNode;

	current->next = newNode;
	return (newNode);
}
