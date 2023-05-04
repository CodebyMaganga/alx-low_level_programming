#include "main.h"
/**
 * clear_bit- sets value of bit to 0 at given index
 * @n: number to be converted to binary
 * @index: index
 * Return: 1 if succesful or -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1ul << index);
	return (1);
}
