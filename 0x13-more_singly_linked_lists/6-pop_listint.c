#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * pop_listint - deletes the head node of
 * @head: head of a list.
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *curr;
	listint_t *h;

	if (*head == NULL)
		return (0);
	curr = *head;
	hnode = curr->n;

	h = curr->next;
	free(curr);
	*head = h;

	return (hnode);

}
