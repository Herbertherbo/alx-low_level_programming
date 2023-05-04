#include "main.h"

/**
 * print_binary -  prints the binary representation of current number.
 * @n:The numb er to be printed
 * Return: nothing
 */

void print_binary(unsigned long int n)
{

	int i, count = 0;
	unsigned long int current_num;

	for (i = 63; i >= 0; i--)
	{
		current_num = n >> i;
		if (current_num & 1)
		{

			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
		}
		if (i == 0)
		_putchar('0');

}
