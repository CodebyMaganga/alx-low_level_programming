#include "main.h"
/**
 * _sqrt_recursion- finds square root of a no.
 * @n: number to find square root
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_helper(n, 1, n));
	}
}
/**
 * _sqrt_helper-  search for the square root in the range from 1 to the input number
 * @n: no. to find square root
 * @start: start from beginning
 * @end: endpoint
 * Return: integer
 */
int _sqrt_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (end < start)
	{
		return (-1);
	}
	if (mid * mid == n || (mid * mid < n && (mid + 1) * (mid + 1) > n))
	{
		return (mid);
	}
	else if (mid * mid < n)
	{
		return (_sqrt_helper(n, mid + 1, end));
	}
	else
	{
	return (_sqrt_helper(n, start, mid - 1));
	}
}
