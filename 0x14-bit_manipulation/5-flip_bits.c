#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Returns number of bits to flip to get from one number to another
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int diff = n ^ m;

	while (diff)
	{
	count += diff & 1;
	diff >>= 1;
	}

	return (count);
}

