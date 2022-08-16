#include "lists.h"

/**
 * print_listint - prints all the elements in listint_t
 * @h: pointer to the listint_t
 * Return: number of items in the node of size_t
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	for (; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
