#include <stdio.h>
/**
 * main- prints lowercase alphabets in reverse
 * Return: 0 if succesfull
 */
int main(void)
{
	int alphabets;

	for (alphabets = 'z'; alphabets >= 'a'; alphabets--)
{
	putchar(alphabets);
}
	putchar('\n');
	return (0);
}
