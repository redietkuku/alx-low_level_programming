#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
/**
 * check_num - checks string
 * @s: string pointer
 *
 * Return: Always 0.
 */
int check_num(char *s)
{
	unsigned int count;

	count = 0;
	while (count < strlen(s))
	{
		if (!isdigit(s[count])) /*check if str there are digit*/
		{
			return (0);
		}
			count++;
	}
		return (1);
	}

/**
* main - Prints name of the program
* @argc: number of arguments
* @argv: list of arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{

	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
			sum += str_to_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}
			count++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}
