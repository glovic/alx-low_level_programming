#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int get_endianness(void)
{
	int n;
	char *c;

	n = 10;
	c = (char *)&n;

	return (*c);
}
