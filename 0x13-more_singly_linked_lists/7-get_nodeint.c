#include "lists.h"

/**
 * get_nodeint_at_index - returns a node an index in a linked list.
 * @head: pointer to the firt in a linked list.
 * @index: index of the node to be returned.
 * Return: pointer to the indexed node or Null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int i = 0;

	listint_t *temp = head;

	while (temp && i < index)

	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);


}
