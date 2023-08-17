#include "lists.h"

/**
 * dlistint_len - returns no. elements in a list
 * @h: pointer to head
 * Return: number of elements in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
