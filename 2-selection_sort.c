#include "sort.h"
/**
 * selection_sort - function that sorts an array
 * of integers in ascending order using the Selection sort algorithm
 * @array: the numbers of array to sort
 * @size: size of the array
*/
void selection_sort(int *array, size_t size)
{
	size_t a, b, smallest, temp;

	if (size < 2 || array == NULL)
		return;
	for (a = 0; a < size - 1; a++)
	{
		smallest = a;
		for (b = a + 1; b < size; b++)
			if (array[b] < array[smallest])
				smallest = b;
		if (smallest != a)
		{
		temp = array[smallest];
		array[smallest] = array[a];
		array[a] = temp;
		print_array(array, size);
		}
	}
}
