#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all- prints anything.
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char c;
	va_list print;

	va_start(print, format);

	while ((c = format[i]) != '\0')
	{
		if (c == 'c')
		{
			char ch = (char) va_arg(print, int);

			printf("%c", ch);
		}
		else if (c == 'i')
		{
			int num = va_arg(print, int);

			printf("%d", num);
		}
		else if (c == 'f')
		{
			double f = va_arg(print, double);

			printf("%f", f);
		}
		else if (c == 's')
		{
			char *s = va_arg(print, char *);

			if (s != NULL)
			{
				printf("%s", s);
			}
			else
			{
				printf("(nil)");
			}
		}
		if (format[i + 1] != '\0' && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
		{
			printf(", ");
		}
		i++;
	}
	va_end(print);
	printf("\n");
}


