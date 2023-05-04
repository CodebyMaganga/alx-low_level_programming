#include <stddef.h>
#include "main.h"
/**
 * flip_bits- calculats bits needed to move from one no to another
 * @n: 1st no in the calculation
 * @m: 2n number in calculation
 * Return: number of bits to be shifted
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit = n ^ m;
	unsigned int i = 0;

	while (bit > 0)
	{
		i += bit & 1;
		bit >>= 1;
	}
	return (bit);
}
