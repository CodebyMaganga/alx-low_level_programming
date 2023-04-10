#include "main.h"
#include <stdio.h>
/**
 * main- prints argument count
 * @argc: argument count
 * @argv: string of arguments
 * Return: 0 if succesful
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
