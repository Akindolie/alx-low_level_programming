#include "main.h"

/**
 * _abs - Calculate the absolute value of an integer.
 * @num: The integer to find the absolute value of.
 * Return: The absolute value of the input number.
 */
int _abs(int num)
{
	if (num < 0)
		num = num * -1;
	return (num);
}
