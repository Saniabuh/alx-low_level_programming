#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a fresh node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails then NULL.
 *         Otherwise - the address of the fresh element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate;
	unsigned int i;
	list_t *fresh, *last;

	duplicate = strdup(str);

	new = malloc(sizeof(list_t));
	if (fresh == NULL)
		return (NULL);

	if (str == NULL)
	{
		free(fresh);
		return (NULL);
	}

	i = 0;

	while (str[i] != '\0')
		i++;

	fresh->str = duplicate;
	fresh->len = i;
	fresh->next = NULL;

	if (*head == NULL)
	{
		*head = fresh;
	}
	else
	{
		last = *head;

		while (last->next != NULL)
			last = last->next;

		last->next = fresh;
	}

	return (*head);
}
