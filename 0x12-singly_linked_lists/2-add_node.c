#include "lists.h"
#include <string.h>

/**
 * add_node - adds a fresh node at beginning of a list
 * @head: pointer to the node
 * @str: value of the node
 *
 * Return: address or NULL if fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *fresh;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!fresh)
		return (NULL);

	fresh->len = len;
	fresh->str = strdup(str);
	fresh->next = (*head);
	(*head) = fresh;

	return (*head);
}
