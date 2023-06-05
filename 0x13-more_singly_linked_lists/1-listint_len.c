#include "lists.h"

/**
 * listint_len - returns number of elements
 * @h: list with elements
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		h = h->next;
		elements++;
	}

	return (elements);
}
