#include "lists.h"

/**
 * pop_intlist - deletes the head node of a linked list
 * @head: pointer to the first data of a linked list
 * Return: returns the head node’s data and 0 if the linked list is empty
 */

int pop_listint(listint_t **head)

{
	listint_t *first;
	int num;

	if (head == NULL)
		return (0);

	first = *head;
	num = (*head)->n;
	*head = (*head)->next;


	free(first);

	return (num);

}
