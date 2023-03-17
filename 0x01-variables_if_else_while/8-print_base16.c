#include <stdio.h>
/**
 * main- prints all hexadecimal no. in lowercase
 * Return: 0 if succesfull
 */
int main(void)
{
	int x;

	for (x = 0; x < 16; x++)
{
	if (x < 10)
{
	putchar(x + '0');
}
	else
{
	putchar(x - 10 + 'a');
}
}
	putchar('\n');
	return (0);
}
