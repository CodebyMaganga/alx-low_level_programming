#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main- generates random number and only last digit printed
 *
 * Description: if last digit is >5, =0 or <6 and not 0
 * Return: 0 if succesfull
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_dgt = n % 10;

	if (last_dgt > 5)
		printf("Last digit of %d is %d and is greater than 5", n, last_dgt);
	else if (last_dgt == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last_dgt);
	}
	else if (last_dgt < 6 && last_dgt != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dgt);
	}
	return (0);
}
