#include "lists.h"
#include <stdio.h>

/**
 * listint_len -  returns number of elements in a linked listint_t list.
 * @h: A pointer to the head of the list.
 * Return: number of elements in the listint_t list.
 */

size_t listint_len(const listint_t *h)

{
	size_t count = 0;

	for (; h != NULL; h = h->next) {
		count++;
	}

	return count;

}
