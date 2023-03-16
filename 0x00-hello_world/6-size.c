#include <stdio.h>
/**
 * main - prints value of different types of variables
 * Return: (0) if successful
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of a char: %d byte(s)\n", (int)sizeof(a));
printf("Size of an integer: %d byte(s)\n", (int)sizeof(b));
printf("Size of a long int: %d byte(s)\n", (int)sizeof(c));
printf("Size of a long long int: %d byte(s)\n", (int)sizeof(d));
printf("Size of a float: %d byte(s)\n", (int)sizeof(f));
return (0);
}
