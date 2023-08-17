#include "lists.h"

/**
 * add_dnodeint - adds node at the beginning
 * @head: start of the list
 * @n: Value
 * Return: address of the new element, null on fail
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	newNode->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = newNode;
	}
	*head = newNode;
	return (*head);
	free(newNode);
}
