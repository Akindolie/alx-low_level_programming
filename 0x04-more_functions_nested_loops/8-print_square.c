#include "main.h"
/**
 * print_square - draws a square using multiple terminal lines and #'s.
 * @nbr: the number of # to print in each line.
 */
void print_square(int nbr)
{
	int i, j;

	if (nbr > 0)
	{
		for (i = 0; i < nbr; i++)
		{
			for (j = 0; j < nbr j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
