#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head node of the list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)

{
	const listint_t *current = head, *loop_node = NULL;
	size_t count = 0;

	while (current != NULL)

	{

		printf("[%p] %d\n", (void *)current, current->n);
		count++;

	if (current >= current->next)

	{

		loop_node = current->next;
	while (loop_node > current)

	{

		printf("[%p] %d\n", (void *)loop_node, loop_node->n);
		count++;
		loop_node = loop_node->next;

	}

		printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
		exit(98);

	}

		current = current->next;
	}

	return (count);

}
