#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings- prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list string;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		char *x = va_arg(string, char *);

		if (x != NULL)
		{
			printf("%s", x);
		}
		else
		{
			printf("(nil)");
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(string);
	printf("\n");
}
