#include <stdio.h>
/**
 * main- prints all possible different combinations of three digits.
 * Return: 0 if succesfull
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 8; a++)
{
	for (b = 0; b < 9; b++)
{
	for (c = 0; c < 9; c++)
{	
	if (a != b && a != c && a != c)	
{
	putchar(a + '0');
	putchar(b + '0');
	putchar(c + '0');
	if (c != 9)
{
	putchar(',');
	putchar(' ');
}
}
}
}
}
	putchar('\n');
	return (0);
}
