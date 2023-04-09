#include "main.h"

int _atoi(char *s)
{
	int num = 0;
	int sign = 1;
	int i = 0;

	if (s[0] = '-')
	{ 
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; i++)
	{
		if (s[i] < '0' && s[i] > '9')
		{
			continue;
		}
		int digit = s[i] - '0';
		num = num * 10 + digit;
	}
	return (sign * num);
}
