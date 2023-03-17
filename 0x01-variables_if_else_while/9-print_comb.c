#include <stdio.h>
/**
 * main- prints all possible combination of single digit numbers
 * Return: 0 if succesfull
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
{
	putchar(a + '0');
	if (a != 9)
{
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');
	return (0);
}
