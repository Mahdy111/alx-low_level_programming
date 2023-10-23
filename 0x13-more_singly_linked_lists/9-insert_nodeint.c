#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: ptr to ptr
 * @idx: int value
 * @n: 2nd int value
 * Return: Zero
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp = *head;
	unsigned int count = 0;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = temp;
		*head = node;
		return (node);
	}
	while (count < (idx - 1))
	{
		if (!temp)
		{
			free(node);
			return (NULL);
		}
		count++;
		temp = temp->next;
	}
	node->next = temp->next;
	temp->next = node;
	return (node);
}
