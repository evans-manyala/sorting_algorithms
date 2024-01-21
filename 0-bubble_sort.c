#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: the array to be sorted
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t x, y, z = 0;
	int temp;
	bool swapped;

	for (x = 0; x < size - 1; x++)
	{
		swapped = false;

		for (y = 0; y < size - x - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				temp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = temp;
				swapped = true;
				printf("Array after swap: [");
				for (z = 0; z < size; z++)
					printf("%d, ", array[z]);
				printf("\b\b]\n");
			}
		}
		if (!swapped)
			break;
	}
}
