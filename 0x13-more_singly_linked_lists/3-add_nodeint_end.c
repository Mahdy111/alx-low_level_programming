#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: ptr to ptr
 * @n: value
 * Return: Zero
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *theend, *node;

	nend = malloc(sizeof(listint_t));
	if (theend == NULL)
	{
		return (NULL);
	}

	theend->n  = n;
	theend->next = NULL;

	if (*head == NULL)
	{
		*head = theend;
	}
	else
	{
		node = *head;
		while (node->next != NULL)
		{
			node = node->next;
		}
		node->next = nend;
	}
	return (theend);
}
