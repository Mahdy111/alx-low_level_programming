#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: ptr
 * Return: free
 */
void free_list(list_t *head)
{
	if (!head)
	{
		return;
	}
	if (head->next)
	{
		free_list(head->next);
	}

	free(head->str);
	free(head);
}
