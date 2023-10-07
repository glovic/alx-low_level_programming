#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digitone;
	int digittwo;

	for (digitone = 0; digittwo <= 9; digitone++)
	{
		for (digittwo = digitone + 1; digittwo <= 9; digittwo++)
		{

			putchar(digitone + '0');
			putchar(digittwo + '0');

			if (! (digitone != 8 && digittwo != 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
