#include <stdio.h>
/**
 * main - prints value of different types of variables
 * Return: (0) if successful
 */
int main(void)
{
printf("Size of a char: %lu byte(s)", sizeof(char));
printf("Size of an integer: %lu byte(s)", sizeof(int));
printf("Size of a long int: %lu byte(s)", sizeof(long int));
printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
printf("Size of a float: %lu byte(s)", sizeof(float));
return (0);
}
