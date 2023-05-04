#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: first number
 * @m: other number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned int count = 0;
	unsigned long int xor_op = n ^ m;

	while (xor_op != 0)
	{
		count++;
		xor_op &= (xor_op - 1);

	}

	return (count);

}
