#include "function_pointers.h"
#include <stddef.h>
/**
  * array_iterator - Applies a function to each element within an array
  * @array: The input array parameter
  * @size: The size of the array
  * @action: Pointer to the function
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x = -1;

	if (array && action)
	{
		while (++x < size)
			action(array[x]);
	}
}
