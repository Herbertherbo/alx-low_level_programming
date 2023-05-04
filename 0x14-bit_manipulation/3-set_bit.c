#include "main.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: pointer to the bit to be set
 * @index: the index, starting from 0 of the bit you want to set
 * Return: return 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = ((1UL << index | *n));
	return (1);
}
