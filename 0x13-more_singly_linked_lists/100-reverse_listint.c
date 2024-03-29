#include "lists.h"

/**
 * reverse_listin - reverse a linked list
 * @head: pointer to the first adress of the list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)

{
	listint_t *prev = NULL;
	listint_t *next = NULL;

		while (*head)

		{
		next = (*head)->next;
		(*head)->next = prev;

		prev = *head;
		*head = next;

		}

		*head = prev;

		return (*head);

}
