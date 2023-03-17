#include <stdio.h>
/**
 * main- prints 'A-Z'
 * Return: 0 if succesfull
 */
int main(void)
{
	int letter;

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
		putchar('\n');
	return (0);
}
