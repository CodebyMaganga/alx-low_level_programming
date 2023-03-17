#include <stdio.h>
/**
 * main- prints all single digits using putchar
 * Return: 0 if succesfull
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
{
	putchar(digit);
}
	putchar('\n');
	return (0);
}
