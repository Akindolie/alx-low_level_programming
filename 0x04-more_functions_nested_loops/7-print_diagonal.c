#include "main.h"
/**
 * print_diagonal - draws a diagonal line across (n) terminal lines.
 * @nbr: the number of lines to print
 */
void print_diagonal(int nbr)
{
	int i, j;

	if (nbr > 0)
	{
		for (j = 1; j <= nbr; j++)
		{
			for (i = 1; i <= j; i++)
			{
				if (i != 1)
					_putchar(' ');
				if (i == j)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}
