#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to a bit
 * @index: index to set the value at.
 * Return: 1 for success and -1 for error
 */

int clear_bit(unsigned long int *n, unsigned int index)

{

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);

}

