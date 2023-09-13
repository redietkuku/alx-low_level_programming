#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - function that print the opcodes of this program
 * @a: main function address
 * @n: number of bytes
 *
 * Return: Always 0.
 */
void print_opcodes(char *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%.2hhx", a[x]);
		if (x < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - prints the opcodes found in  its own main function
 * @argc: number of arguments passed
 * @argv: array of pointers to arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
