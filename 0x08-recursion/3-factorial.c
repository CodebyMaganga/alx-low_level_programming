#include "main.h"
/**
 * factorial- returns factor of a given number
 * @n: number to get factor
 * Return: number
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
