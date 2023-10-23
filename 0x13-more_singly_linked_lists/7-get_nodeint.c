#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: ptr
 * @index: val
 * Return: Zero
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	node = head;
	while (i < index && node != NULL)
	{
		node = node->next;
		i++;
	}
	if (i != index)
	{
		return (NULL);
	}
	return (node);
}
