#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the sum of positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return:
 *   - 0 if successful.
 *   - 1 if non-digit symbols are present in the input.
 */
int main(int argc, char *argv[])
{
	int num, num2, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (num2 = 0; argv[num][num2]; num2++)
		{
			if (argv[num][num2] < '0' || argv[num][num2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
