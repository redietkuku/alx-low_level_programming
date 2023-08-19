#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: character to be checked
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int string_value;

	for (string_value = 0; str[string_value] != '\0'; string_value++)

	if (string_value % 2 == 0)

		_putchar(str[string_value]);

	_putchar('\n');
}
