#include "main.h"
#include <stdio.h>
/**
 * rot13- encodes string using rot13
 *
 * @string: sentence to be encoded
 * Return: string
 */
char *rot13(char *string)
{
	int i;
	int j;
	char data1[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; string[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (string[i] == data1[j])
			{
				string[i] = rot13[j];
				break;
			}
		}
	}
	return (string);
}
