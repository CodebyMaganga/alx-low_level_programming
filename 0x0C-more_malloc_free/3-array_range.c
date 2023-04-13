#include <stdlib.h>
#include "main.h"
/**
 * array_range- creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int n = 1 + (max - min);
	int i;

	if (min > max)
		return (NULL);

	p = (int *) malloc(n * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		p[i] = min + i;
	}
	return (p);
}
