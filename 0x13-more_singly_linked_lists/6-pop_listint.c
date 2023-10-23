#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * , and returns the head node’s data (n)
 * @head: ptr to ptr
 * Return: if the linked list is empty return Zero
 */
int pop_listint(listint_t **head)
{
	int nodeon;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	nodeon = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (nodeon);
}
