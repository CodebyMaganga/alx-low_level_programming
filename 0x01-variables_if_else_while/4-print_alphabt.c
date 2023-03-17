#include <stdio.h>
/**
 * main- prints lowercase alphabets except q and e
 * Return: 0 if succesfull
 */
int main(void)
{
	int chr;

	for (chr = 'a'; chr <= 'z'; chr++)
{
	if ((chr == 'e') | (chr == 'q'))
{
	continue;
}
		putchar(chr);
}
		putchar('\n');
	return (0);
}
