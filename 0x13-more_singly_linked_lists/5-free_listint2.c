#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: value ptr to ptr
 * Return: Zero
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head)
	{
		if (*head)
		{
			while (*head != NULL)
			{
				node = *head;
				*head = (*head)->next;
				free(node);
			}
		}
		*head = NULL;
	}
}
