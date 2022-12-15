#include "main.h"
/**
 * print_triangle - draws a triangle using multiple terminal lines and #'s.
 * @ht: the height of the triangle.
 */
void print_triangle(int ht)
{
	int i, j;

	if (ht > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j >= 1; j--)
			{
				if (i < j)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
