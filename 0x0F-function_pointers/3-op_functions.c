#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add- adds two no.
 * @a: first number
 * @b:2nd no.
 * 
 * Return: result which is an integer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub- subtracts two no.
 * @a: first number
 * @b:2nd no.
 *
 * Return: subtraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- multiplies two no.
 * @a: first number
 * @b:2nd no.
 *
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- multiplies two no.
 * @a: first number
 * @b:2nd no.
 *
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod- modulo of two no.
 * @a: first number
 * @b:2nd no.
 *
 * Return: modulo of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
