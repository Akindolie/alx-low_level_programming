#include "main.h"
/**
 * verifier - checks the input parameter from n to the base
 * @n: number is squared and verified against the base
 * @baseVal: base number to check for
 * Return: the natural square root of the number base
 */
int verifier(int n, int baseVal)
{
	if (n * n == baseVal)
		return (n);
	if (n * n > baseVal)
		return (-1);
	return (verifier(n + 1, baseVal));
}
/**
 * _sqrt_recursion - Calculate the natural square root of a number
 * @numb: input parameter
 * Return: the square root
 */
int _sqrt_recursion(int numb)
{
	return (verifier(1, numb));
}
