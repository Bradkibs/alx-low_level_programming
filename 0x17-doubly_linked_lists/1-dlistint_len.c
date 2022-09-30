#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t
 * @h: the head of the linked list
 * Return: number of elements in dlistint_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;
	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
