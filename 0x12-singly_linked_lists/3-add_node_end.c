#include "lists.h"

/**
 * add_node_end - add a new node at end of list_t list
 * @head: head of list_t
 * @str: string
 * Return: NULL if function fails
 *	address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate;
	int len;
	list_t *new, *end;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len]; len++)
		;

	new->str = duplicate;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}

	return (*head);
}
