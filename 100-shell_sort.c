#include "sort.h"

/**
 * shell_sort - This sorts an array of integers in an
 * ascending order using the shell
 * sort algorithm, with gap sizes
 * determined by a decreasing Knuth seqeuence
 * @array: the numbers of array to sort
 * @size: size of an array
 */
void shell_sort(int *array, size_t size)
{
	int a, b, gap, c, Knuth_max, temp;

	if (!array || size < 2)
		return;

	c = (int)size;
	for (gap = 1; gap < c; gap = (gap * 3) + 1)
	{
		Knuth_max = gap;
	}

	for (gap = Knuth_max; gap > 0; gap = (gap - 1) / 3)
	{
		
		for (a = gap; a < c; a++)
		{
			
			temp = array[a];
			
			for (b = a; b >= gap && array[b - gap] > temp; b -= gap)
			{
				array[b] = array[b - gap];
			}

			array[b] = temp;
		}
		print_array(array, size);
	}
}
