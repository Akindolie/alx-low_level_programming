#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * sum_them_all - Adds all input arguments
  * @n: The count of arguments
  * @...: The variable list of all arguments
  * Return: Addition of all the arguments
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x, result;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (x = result = 0; x < n; x++)
	{
		result += va_arg(ap, int);
	}
	va_end(ap);
	return (result);
}
