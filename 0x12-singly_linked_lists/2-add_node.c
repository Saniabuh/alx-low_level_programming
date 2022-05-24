#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at beginning of a list
 * @head: pointer to the node
 * @str: value of the node
 *
 * Return: address or NULL if fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->len = len;
	new->str = strdup(str);
	new->next = (*head);
	(*head) = new;

	return (*head);
}
