#include "lists.h"

/**
 * list_len - evaluates the number of elements in a linked list
 * @h: pointer to the linked list head
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
