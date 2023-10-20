#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: ptr
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		i++;
	}
	return (i);
}
