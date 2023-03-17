#include <stdio.h>
/**
 * main- prints 'A-Z'
 * Return: 0 if succesfull
 */
int main(void)
{
	int letter;
	int upper_letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (upper_letter = 'A'; upper_letter <= 'Z'; upper_letter++)
		putchar(upper_letter);
		return (0);
}
