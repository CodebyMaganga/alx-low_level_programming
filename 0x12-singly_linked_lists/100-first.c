#include <stdio.h>

void b4_main(void) __attribute__((constructor));

/**
 * b4_main - prints a message before the main function is executed
 *
 */
void b4_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
