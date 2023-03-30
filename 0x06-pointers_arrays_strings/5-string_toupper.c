#include "main.h"
/**
 *string_toupper- converts lowercase to upper
 *
 *@string: string to be converted
 *Return: char
 */
char *string_toupper(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] = string[i] - 32;
		}
	}
	return (string);
}
