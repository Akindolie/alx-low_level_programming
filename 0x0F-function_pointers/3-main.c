#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
  * main - Function
  * @argc: The number of arguments
  * @argv: The pointer to array of pointers
  * Return: Returns 0 for success, 98 for malformed arguments,
  * and 99 in case of no operator.
  */
int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc != 4)
		printf("Error\n"), exit(98);
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	if (get_op_func(argv[2]) == NULL)
		printf("Error\n"), exit(99);
	if (n2 == 0 && (*argv[2] == '%' || *argv[2] == '/'))
		printf("Error\n"), exit(100);
	printf("%d\n", (get_op_func(argv[2])(n1, n2)));
	return (0);
}
