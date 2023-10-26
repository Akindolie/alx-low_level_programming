#include "main.h"
/**
 * _print_rev_recursion - function prints a string in reverse
 * @x: The string arguement to be printed
 */
void _print_rev_recursion(char *x)
{
	if (*x)
	{
		_print_rev_recursion(x + 1);
		_putchar(*x);
	}
}
