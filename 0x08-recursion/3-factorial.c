#include "main.h"
/**
 * factorial - The factorial of a given number
 * @numb:Number parameter
 * Return: The factorial of the given number
 */
int factorial(int numb)
{
	if (numb < 0)
		return (-1);
	if (num == 1)
		return (1);
	return (numb * factorial(numb - 1));
}
