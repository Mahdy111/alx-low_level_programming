#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: the head
 * Return: numbers of node
 */
size_t print_listint(const listint_t *h)
{
	size_t ndes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		ndes++;
	}
	return (ndes);
}
