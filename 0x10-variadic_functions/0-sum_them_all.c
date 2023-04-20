#include "variadic_functions.h"
/**
 * sum_them_all- sum up integers
 * @n: first integer to
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i = 0, x = 0;
	int arg;

	va_start(sum, n);

	while (i < n)
	{
		arg = va_arg(sum, int);
		x += arg;
		i++;
	}
	va_end(sum);
	return (x);
}
