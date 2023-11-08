#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the opcodes of its own.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of pointers to the arguments.
 *
 * Return: Always (0).
 */
int main(int argc, char *argv[])
{
	int bytes, idx;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (idx = 0; idx < bytes; idx++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (idx == bytes - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
