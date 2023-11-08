#include "function_pointers.h"
#include <stdlib.h>
/**
  * int_index - Return the index pos if the comparison is true;
  * @array: The pointer to the array
  * @size: The size of the array
  * @cmp: The pointer to the function of one of the three in main
  * Return: The index of the first element found
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	x = -1;
	if (size <= 0 || !(array) || !(cmp))
		return (-1);
	while (++x < size)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
