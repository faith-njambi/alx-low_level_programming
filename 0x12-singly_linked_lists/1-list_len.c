#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * list_len - returns number of elements
 * @h: list with elements
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		h = h->next;
		elements++;
	}

	return (elements);
}
