#include <stdio.h>

/**
 * main - Prints all received arguments.
 * @argc: Number of program arguments.
 * @argv: Array of argument strings.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
	{
		printf("%s\n", argv[arg]);
	}

	return (0);
}
