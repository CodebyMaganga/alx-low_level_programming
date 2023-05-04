#include "main.h"
/**
 * get_endianness- finds endianness of a number
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	int dgt = 1;
	char *p = (char *)&dgt;

	if (*p)
		return (1);
	else
		return (0);
}
