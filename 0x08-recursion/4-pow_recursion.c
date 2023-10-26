#include "main.h"
/**
 * _pow_recursion - calculates the value of a raised to power b
 * @a: main value parameter
 * @b: the power parameter
 * Returns: the resulting integer from the calculation
 */
integer _pow_recursion(int a, int b)
{
	if (b < 0)
		return (-1);
	return (a * _pow_recursion(a, b - 1));
}
