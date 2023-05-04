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

	unsigned int i, count = 0;
	unsigned long int first_num;
	unsigned long int other_num = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		first_num = other_num >> i;
		if (first_num & 1)
			count++;
	}

	return (count);

}
