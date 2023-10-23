#include "lists.h"

/**
 * free_listint - frees a listint_t lis
 * @head: value ptr
 * Return: Zero
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
