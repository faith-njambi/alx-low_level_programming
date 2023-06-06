#include "lists.h"

/**
 * sum_listint - sums all data(n) of a list
 * @head: Head if list
 * Return: sum
 *	0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
