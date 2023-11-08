#include "function_pointers.h"
/**
  * print_name - Outputs a given name
  * @name: The input string parameter
  * @f: The function pointer casted to char pointer
  */
void print_name(char *name, void (*f)(char *))
{
	if(name == NULL || f == NULL)
		return;
	f(name);
}
