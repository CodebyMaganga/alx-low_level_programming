#include "main.h"
/**
 *leet- encodes a string into 1337
 *
 *@string: string to be encoded
 *Return: string
 */
char *leet(char *string)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; string[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (string[i] == s1[j])
			{
				string[i] = s2[j];
			}
		}
	}
	return (string);
}
