#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This function causes an infinte loop, but it's commented out.
 * It prints a message indicating an infinte loop, and then a message
 * about avoiding the infinite loop.
 *
 * Return: 0 on success.
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	/*
	* while (i < 10)
	* {
	*     putchar(i);
	* }
	*/

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
