#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all- prints anything.
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list print;

	va_start(print, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(print, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(print, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(print, double));
					break;
				case 's':
					str = va_arg(print, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
						i++;
						continue;
			}
			sep = ", ";
			i++;
		}
	}
}
