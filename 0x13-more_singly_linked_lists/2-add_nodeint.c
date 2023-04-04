#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: A pointer to the first adrees in the list.
 * @n: Data to be inserted in the new node.
 * Return: pointer to the new Node and NULL if it fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *new;

	new = malloc(sizeof(listint_t));

		if (!new)

		return (NULL);

		new->n = n;
		new->next = *head;

		*head = new;


	return (new);

}
