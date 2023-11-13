#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * p_char - Outputs characters
  * @c: character to output
  */
void p_char(va_list ch)
{
	printf("%c", va_arg(ch, int));
}
/**
  * p_int - Outputs integers
  * @i: integer to output
  */
void p_int(va_list in)
{
	printf("%d", va_arg(in, int));
}
/**
  * p_float - Output floats
  * @f: float to output
  */
void p_float(va_list ft)
{
	printf("%f", va_arg(ft, double));
}
/**
  * p_string - Outputs strings
  * @s: string to output
  */
void p_string(va_list str)
{
	char *string;

	string = va_arg(str, char *);
	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}
/**
  * print_all - Outputs any arg parameter passed into it
  * @format: Helps to format symbols
  */
void print_all(const char * const format, ...)
{
	unsigned int x, y;
	char *separator;
	va_list argp;
	v_types valid_types[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string}
	};

	x = y = 0;
	separator = "";
	va_start(argp, format);
	while (format && format[x])
	{
		y = 0;
		while (y < 4)
		{
			if (format[x] == *valid_types[y].valid)
			{
				printf("%s", separator);
				valid_types[y].f(argp);
				separator = ", ";
			}
			y++;
		}
		x++;
	}
	printf("\n");
}
