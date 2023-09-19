#include "function_pointers.h"

/**
 * array_iterator - refers to an array through pointer
 * @array: an array of int
 * @size: an array of size
 * @action: a function pointer
 *
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
		int *end = array + size - 1;

		if (array && size && action)
			while (array <= end)
				action(*array++);
}
