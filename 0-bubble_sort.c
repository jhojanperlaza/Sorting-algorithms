#include "sort.h"

/**
 * bubble_sort - function that sorts using the Bubble sort algorithm
 *@array: the array of elements
 *@size: the size of the array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t cont = 0, tmp = 0, i = 0;

	if (!array || !size)
		return;
	for (i = 0; i < size; i++)
	{
		for (cont = 0; array[cont]; cont++)
		{
			if (cont == size - 1)
				break;
			if (array[cont] > array[cont + 1])
			{
				tmp = array[cont];
				array[cont] = array[cont + 1];
				array[cont + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
