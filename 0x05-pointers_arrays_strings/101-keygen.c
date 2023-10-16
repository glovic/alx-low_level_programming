#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the 101-crackme program.
 *
 * Return: Always returns 0.
 */
int main(void)
{
	char validPassword[84];
	int index = 0, seed = 0, left_half_difference, right_half_difference;

	srand(time(0));

	while (seed < 2772)
	{
		validPassword[index] = 33 + rand() % 94;
		seed += validPassword[index++];
	}

	validPassword[index] = '\0';

	if (seed != 2772)
	{
		left_half_difference = (seed - 2772) / 2;
		right_half_difference = (seed - 2772) / 2;
		if ((seed - 2772) % 2 != 0)
			left_half_difference++;

		for (index = 0; validPassword[index]; index++)
		{
			if (validPassword[index] >= (33 + left_half_difference))
			{
				validPassword[index] -= left_half_difference;
				break;
			}
		}
		for (index = 0; validPassword[index]; index++)
		{
			if (validPassword[index] >= (33 + right_half_difference))
			{
				validPassword[index] -= right_half_difference;
				break;
			}
		}
	}

	printf("%s", validPassword);
	return (0);
}
