#include "lists.h"

/**
 * sum_dlistint - returns sum of all data of a list
 * @head: head of a list
 * Return: Sum of n
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
