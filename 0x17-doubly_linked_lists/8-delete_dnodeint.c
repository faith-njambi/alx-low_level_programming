#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given position
 * @h: pointer to head
 * @idx: index of the node to delete
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int idx)
{
		dlistint_t *current, *temp;
		unsigned int i;

		if (*h == NULL)
			return (-1);

		current = *h;

		if (idx == 0)
		{
			*h = current->next;
			if (current->next != NULL)
				current->next->prev = NULL;
			free(current);
			return (1);
		}

		for (i = 0; i < idx; i++)
		{
			if (current == NULL)
				return (-1);
			current = current->next;
		}

		temp = current->prev;
		temp->next = current->next;
		if (current->next != NULL)
			current->next->prev = temp;
		free(current);
		return (1);
}

