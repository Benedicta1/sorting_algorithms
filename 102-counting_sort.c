#include "sort.h"
#include <stdlib.h>

/**
 * counting_sort - This sorts an array of integers
 * in ascending order using a counting sort algorithm
 * @array: the number of array to sort
 * @size: the size of the full array
 */
void counting_sort(int *array, size_t size)
{
	int a, total, max;
	int *count, *output;

	if (!array || size < 2)
		return;

	max = array[0];
	for (a = 0; a < (int)size; a++)
	{
		if (array[a] > max)
			max = array[a];
	}

	count = calloc((max + 1), sizeof(int));
	if (!count)
		return;
	for (a = 0; a < (int)size; a++)
		count[array[i]]++;

	for (a = 0, total = 0; a < max + 1; a++)
	{
		total = count[a] + total;
		count[a] = total;
	}
	print_array(count, max + 1);

	output = malloc(sizeof(int) * size);
	if (!output)
		return;

	for (a = 0; a < (int)size; a++)
	{
		output[count[array[a]] - 1] = array[a];
		count[array[a]]--;
	}

	for (a = 0; a < (int)size; a++)
		array[a] = output[a];
	free(count);
	free(output);
}
