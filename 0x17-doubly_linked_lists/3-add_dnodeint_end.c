#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end
 * @head: start of the list
 * @n: Value
 * Return: adress of new element, null on fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *current;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = newNode;
	newNode->prev = current;
	return (newNode);
}
