#include "function_pointers.h"
/**
 * array_iterator - iterates thru an array
 * @array: array to be iterated
 * @size: size of an array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
