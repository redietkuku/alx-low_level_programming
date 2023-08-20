/**
 * print_line - prints a buffer
 * @a: the buffer to be printed
 * @d: number of bytes to be printed
 * @e: line to be printed
 *
 * Return: Always 0.
 */
void print_line(char *a, int d, int e)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		if (x <= d)
			printf("%02x", a[e * 10 + x]
		else
			printf("   ");
		if (x % 2)
			putchar(' ');
	}
	for (y = 0; y <= d; y++)
	{
		if (a[e * 10 + y] > 31 && a[e * 10 + y] < 127)
			putchar(a[e * 10 + y]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - prints buffer
 * @b: buffer to be printed
 * @size: size of the buffer
 *
 * Return: Always 0.
 */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			print_line(b, 9, i);
		}
		else
		{
			printline(b, size % 10 - 1, i);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
