#include <stdio.h>

/**
 * printStr_before_main - prints a string before main function is exceuted
 */
void printStr_before_main(void) __attribute__ ((constructor));

void printStr_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
