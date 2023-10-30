#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a 2D array of integers initialized to 0.
 * @width: Width of the 2D array.
 * @height: Height of the 2D array.
 *
 * Return: If width or height are <= 0 or if the function fails - NULL.
 *         Otherwise - a pointer to the 2D array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **twoD;
	int hgt_idx, wid_idx;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
		return (NULL);

	for (hgt_idx = 0; hgt_idx < height; hgt_idx++)
	{
		twoD[hgt_idx] = malloc(sizeof(int) * width);

		if (twoD[hgt_idx] == NULL)
		{
			for (; hgt_idx >= 0; hgt_idx--)
				free(twoD[hgt_idx]);

			free(twoD);
			return (NULL);
		}
	}

	for (hgt_idx = 0; hgt_idx < height; hgt_idx++)
	{
		for (wid_idx = 0; wid_idx < width; wid_idx++)
			twoD[hgt_idx][wid_idx] = 0;
	}

	return (twoD);
}
