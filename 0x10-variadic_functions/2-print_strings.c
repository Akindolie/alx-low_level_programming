#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * print_strings - Outputs a list of strings
  * @separator: Delimited characters
  * @n: The number of items to printout
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *words;
	va_list ap;

	va_start(ap, n);
	for (x = 0; x < n; x++)
	{
		words = va_arg(ap, char *);
		(words) ? printf("%s", words) : printf("(nil)");
		if (separator != NULL && x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
