#include "lists.h"
#include <stdio.h>

/**
 * pop_intlist - deletes the head node of a listint_t linked list
 * @head: pointer to the first data of a linked list
 * Return: returns the head node’s data and 0 if the linked list is empty
 */

int pop_listint(listint_t **head)

{

		int data;
		listint_t *temp;


		if (*head == NULL)
			return (0);

		temp = *head;
		data = temp->n;
		*head = (*head)->next;
		free(temp);


		return (data);

}
