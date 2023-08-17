#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a list
 * @head: pointer to head
 * @index: index of the node
 * Return: nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
