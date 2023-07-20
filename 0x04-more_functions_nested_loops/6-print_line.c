#include "main.h"
/**
 * print_line - draws a straight line (n) characters long.
 * @nbr: the number of underscores to print.
 */
void print_line(int nbr)
{
	int i;

	if (nbr > 0)
		for (i = 0; i < nbr; i++)
			_putchar('_');
	_putchar('\n');
}
