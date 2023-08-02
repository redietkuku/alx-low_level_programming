#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - Determines if a number is positive, negative or zero.
 *
 * @i: integer input to be checked.
 *
 * Return: None (void)
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
