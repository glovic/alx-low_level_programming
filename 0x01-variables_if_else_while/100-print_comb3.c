#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digitone, digittwo;

	for (digitone = 0; digitone < 9; digitone++)
	{
		for (digittwo = digitone + 1; digittwo < 10; digittwo++)
		{

			putchar((digitone % 10) + '0');
			putchar((digittwo % 10) + '0');

			if (digitone == 8 && digittwo == 9)
				continue;

			putchar(',');
			putchar(' ');

		}
	}

	putchar('\n');

	return (0);
}
