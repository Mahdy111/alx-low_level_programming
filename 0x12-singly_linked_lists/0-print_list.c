#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;
	list_t *list;

	list = (list_t *)h;

	for (i = 0; list != NULL; i++)
	{
		if (list->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", list->len, list->str);
		}

		list = list->next;
	}
	return (i);
}
