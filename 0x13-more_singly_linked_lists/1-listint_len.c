#include "lists.h"

/**
 * listint_len - return the number
 * a linked lsit
 * @h: head of a lsit
 * Return: numbers of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
