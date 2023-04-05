#include "main.h"

int prime(int n, int i);
/**
 * is_prime_number- finds prime number
 * @n: decide if number is prime number
 * Return: 0 if not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, n - 1));

}
/**
 * prime- checks for number recursively
 * @n: no. to check
 * @i: iterator
 * Return: 1 if prime
 */
int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}
