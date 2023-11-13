#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * print_numbers - Outputs numbers
  * @separator: Delimiter character
  * @n: Number of elements to be printed
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list ap;

	va_start(ap, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
