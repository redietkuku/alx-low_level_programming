#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	char password[84];
	int index = 0, sum = 0, half_diff1, half_diff2;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}
	password[index] = '\0';
	if (sum != 2772)
	{
		half_diff1 = (sum - 2772) / 2;
		half_diff2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			half_diff1++;
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + half_diff1))
			{
				password[index] -= half_diff1;
			}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + half_diff2))
			{
				password[index] -= half_diff2;
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}
