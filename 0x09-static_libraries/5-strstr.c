#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input1
 * @needle: input2
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *s = haystack;
		char *t = needle;


		while (*s == *t && *t != '\0')
		{
			t++;
			t++;
		}


		if (*t == '\0')
			return (haystack);
	}


	return (0);
}

