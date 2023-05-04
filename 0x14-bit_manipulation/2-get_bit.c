#include "main.h"
/**
 * get_bit- returns value of a bit at given index
 * @n: number to be converted to binary
 * @index: index at binary of n
 * Return: value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
