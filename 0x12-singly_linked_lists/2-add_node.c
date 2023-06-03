#include "lists.h"

/**
 * add_node - add a new node at start of list_t list
 * @head: head of list_t
 * @str: string
 * Return: NULL if function fails
 *	address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len]; len++)
		;

	new->str = duplicate;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
