#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates program arguments into a string with new lines.
 * @ac: Number of arguments passed to the program.
 * @av: Array of pointers to the arguments.
 *
 * Return: If ac is 0, av is NULL, or the function fails - NULL.
 *         Otherwise - pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, idx, size = ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	idx = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[idx++] = av[arg][byte];

		str[idx++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
