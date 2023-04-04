#include "lists.h"

/**
 * print_listint - Prints all the elements of listint_t list
 * @h: Pointer to the head of list_t list
 * Return: The number of nodes in list_t list
 */

size_t print_listint(const listint_t *h)
{

	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}


	return (nodes);

}
