#include "main.h"
#include <stdlib.h>

/**
 *  alloc_grid - creates a 2D array and returns the pointer to the memory
 *  @width: width of the 2D array
 *  @height: height of the 2D array
 *  Return: a pointer to the 2D array or NULL if the process fails
 */
int **alloc_grid(int width, int height)
{
	int **_2D;
	int height_index, width_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	_2D = malloc(sizeof(int *) * height);

	if (_2D == NULL)
		return (NULL);

	for (height_index = 0; height_index < height; height_index++)
	{
		_2D[height_index] = malloc(sizeof(int) * width);

		if (_2D[height_index] == NULL)
		{
			for (; height_index >= 0; height_index--)
				free(_2D[height_index]);

			free(_2D);
			return (NULL);
		}
	}

	for (height_index = 0; height_index < height; height_index++)
	{
		for (width_index = 0; width_index < width; width_index++)
			_2D[height_index][width_index] = 0;
	}

	return (_2D);
}
