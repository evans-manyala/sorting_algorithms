#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: the array to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	size_t x, y;
	int temp, swapped;

	for (x = 0; x < size - 1; x++)
	{
		swapped = 0;

		for (y = 0; y < size - x - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				// Swap elements
				temp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = temp;

				swapped = 1;
			}
		}

		if (!swapped)
			break;

		// Print array after a pass
		printf("Array after pass %zu: [", x + 1);
		for (size_t z = 0; z < size; z++)
			printf("%d%s", array[z], z < size - 1 ? ", " : "");
		printf("]\n");
	}
}