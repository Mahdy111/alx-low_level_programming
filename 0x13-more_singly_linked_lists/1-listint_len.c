#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * a linked list.
 * @h: head of a list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t ndes = 0;

	while (h != NULL)
	{
		h = h->next;
		ndes++;
	}
	return (ndes);
}
