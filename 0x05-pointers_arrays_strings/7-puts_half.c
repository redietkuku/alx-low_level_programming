#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int string_value = 0;

	int x = 0;

	while (str[string_value] != '\0')
		string_value++;

	if (string_value + 1 % 2 != '0')
		x = (string_value - 1) / 2;
	else
		x = (string_value / 2);
	x++;

	for (string_value = x; str[string_value] != '\0'; string_value++)

	_putchar(str[string_value]);
	_putchar('\n');
}
