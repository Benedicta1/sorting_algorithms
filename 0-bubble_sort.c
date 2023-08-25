#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: the numbers of array to sort
 * @size: the size of array
 * Return: Always 0
*/
void bubble_sort(int *array, size_t size)
{
	int temp, check;
	size_t b;

	check = 1;
	if (array == NULL || size < 2)
		return;
	while (check != 0)
	{
		check = 0;
		for (b = 0; b < size - 1; b++)
			if (array[b] > array[b + 1])
			{
				temp = array[b];
				array[b] = array[b + 1];
				array[b + 1] = temp;
				check = 1;
				print_array(array, size);
			}
	}
}
