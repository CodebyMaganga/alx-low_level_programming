#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint- converts binary to decimal
 * @b: pointer to string b
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int s, num = 0;

	if (b == NULL)
		return (0);

	for (s = 0; b[s] != '\0'; b++)
	{
		if (b[s] == '0' || b[s] == '1')
		{
			num = num << 1;
			num += b[s] - '0';
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
