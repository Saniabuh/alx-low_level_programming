#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees listint_t list
 * @head: pointer to the start of the linked list
 */

void free_listint(listint_t *head)
{
	listint_t *hold;

	while (head)
	{
		hold = head;
		head = (*head).next;
		free(hold);
	}
}
