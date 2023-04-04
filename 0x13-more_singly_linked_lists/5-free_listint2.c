#include "lists.h"

/**
 * free_listint_2 - frees linked list.
 * @head: pointer to the linked list be freed.
 * Return: void
 */

void free_listint2(listint_t **head)

{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)

	{
		temp = (*head)->next;
		free(*head);
		*head = temp;

	}

	*head = NULL;

}
