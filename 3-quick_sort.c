#include "sort.h"
/**
 * partition - this function is to divide
 * the array to smaller pieces
 * @array: the number of array to sort
 * @low_index: index in array that starts partition
 * @high_index: index in array that ends partition
 * @size: the size of the full array
 * Return: Always 0
*/
int partition(int *array, int low_index, int high_index, size_t size)
{
	int a, b, pivot_element, temp;

	pivot_element = array[high_index];
	a = (low_index - 1);
	for (b = low_index; b < high_index; b++)
	{
		if (array[b] <= pivot_element)
		{
			a++;
			if (a != b)
			{
				temp = array[a];
				array[a] = array[b];
				array[b] = temp;
				print_array(array, size);
			}
		}
	}
	if (pivot_element < array[a + 1])
	{
		temp = array[a + 1];
		array[a + 1] = array[high_index];
		array[high_index] = temp;
		print_array(array, size);
	}
	return (a + 1);
}
/**
 * quickSort - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: the number of array to sort
 * @low_index: index in array that starts partition
 * @high_index: index in array that ends partition
 * @size: the size of array
 * Return: Always 0
*/
void quickSort(int *array, int low_index, int high_index, size_t size)
{
	int pivot;

	if (low_index < high_index)
	{
		pivot = partition(array, low_index, high_index, size);
		quickSort(array, low_index, pivot - 1, size);
		quickSort(array, pivot + 1, high_index, size);
	}
}

/**
 * quick_sort - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: the number of array to sort
 * @size: the size of array
 * Return: Always 0
*/
void quick_sort(int *array, size_t size)
{
	int low_index, high_index;

	low_index = 0;
	high_index = size - 1;
	if (size < 2 || array == NULL)
		return;
	quickSort(array, low_index, high_index, size);
}
