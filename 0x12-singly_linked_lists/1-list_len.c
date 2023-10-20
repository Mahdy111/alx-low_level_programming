#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: ptr
 * Return: Zero
 */
size_t list_len(const list_t *h)
{
	size_t i;
	list_t *list;

	list = (list_t *)h;

	for (i = 0; list != NULL; i++)
	{
		list = list->next;
	}
	return (i);
}
