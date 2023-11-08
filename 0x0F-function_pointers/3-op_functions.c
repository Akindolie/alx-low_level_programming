#include "3-calc.h"
/**
  * op_add - Sums two numbers
  * @x: First number parameter
  * @y: Second number parameter
  * Return: The sum of the two numbers
  */
int op_add(int x, int y)
{
	return (x + y);
}
/**
  * op_sub - subtracts two numbers
  * @x: First number parameter
  * @y: second number parameter
  * Return: The result of difference of the numbers
  */
int op_sub(int x, int y)
{
	return (x - y);
}
/**
  * op_mul - multiplies two numbers
  * @x: First number parameter
  * @y: Second number parameter
  * Return: Multiplication output
  */
int op_mul(int x, int y)
{
	return (x * y);
}
/**
  * op_div - divides two numbers
  * @x: First number parameter
  * @y: Second number parameter
  * Return: division of x by y
  */
int op_div(int x, int y)
{
	return (x / y);
}
/**
  * op_mod - divides two numbers, returns the remainder
  * @x: First number parameter
  * @y: Second number parameter
  * Return: remainder of the division
  */
int op_mod(int x, int y)
{
	return (x % y);
}
