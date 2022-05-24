#include "lists.h"

/**
 * list_len - returns the no of elements in a linked list
 * @h: pointer to the first element of the list
 *
 * Return: no of list's elements
 */

size_t list_len(const list_t *h)
{
	size_t sum = 0;

	while (h != NULL)
	{
		h = h->next;
		sum++;
	}
	return (sum);
}
