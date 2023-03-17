#include <stdio.h>
/**
 * main- prints 'A-Z'
 * Return: 0 if succesfull
 */
int main(void)
{
	char alp[26] = 'abcdefghijklmnopqrstuvwxyz'
	int letter;

	for (letter = 'A'; letter <= 'Z'; letter++)
{
		putchar(alp[letter]);
}
	putchar('\n');
	return (0);
}
