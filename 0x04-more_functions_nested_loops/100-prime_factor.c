#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long pri = 612852475143, dash;

	while (dash < (pri / 2))
	{
		if ((pri % 2) == 0)
		{
			pri /= 2;
			continue;
		}

		for (dash = 3; dash < (pri / 2); dash += 2)
		{
			if ((pri % dash) == 0)
			{
				pri /= dash;
			}
		}
	}

	printf("%ld\n", pri);

	return (0);
}
