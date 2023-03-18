#include <stdio.h>
/**
 * main- prints all possible different combinations of three digits.
 * Return: 0 if succesfull
 */
int main(void)
{
	int a, b, c;

	for (a = '0' ;a <= '7' ; a++)
{
	for (b = a + 1 ;b <= '8' ; b++)
{
	for (c = b + 1 ;c <= '9' ; c++)
{
	if ((b != a) != c)
{
	putchar(a);
	putchar(b);
	putchar(c);
	if (a == '7' && b == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
