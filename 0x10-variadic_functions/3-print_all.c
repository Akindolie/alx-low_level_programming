#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all -Can print anything
 * @format: Alist of types of args given to the function
 */
void print_all(const char * const format, ...)
{
	int idx = 0;
	char *str, *sep = "";
	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[idx])
		{
			switch (format[idx])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					idx++;
					continue;
			}
			sep = ", ";
			idx++;
		}
	}
	printf("\n");
	va_end(list);
}
