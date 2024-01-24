#include "sort.h"
/**
 * swapped - Function swaps values in array.
 * @num1: 1st value in array to be swapped.
 * @num2: 2nd value in array to be swapped.
 */
void swapped(int *num1, int *num2)
{
	int temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

/**
 * shell_sort - Sorts an array of integers in ascending order
 *              using Shell Sort Algorithm with Knuth sequence.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void shell_sort(int *array, size_t size)
{
        size_t x, y, gap;

        if (array == NULL || size < 2)
                return;
        gap = 1;

        while (gap < (size / 3))
                gap = (gap * 3) + 1;

        while (gap >= 1)
        {
                x = gap;
                while (x < size)
                {
                        y = x;
                        while (y >= gap && array[y - gap] > array[y])
                        {
                                swapped(array + y, array + (y - gap));
                                y -= gap;
                        }
                        x++;
                }
                print_array(array, size);
                gap /= 3;
        }
}
