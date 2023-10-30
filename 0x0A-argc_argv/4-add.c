#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * verifier - verifies if the inputs are valid
 * @argc: argument count
 * @x: counter for argv[]
 * @y: counter for argv[][]
 * @argv: argument vector
 * Return: 0 for success, 1 for failure
 */
int verifier(int argc, int x, unsigned int y, char *argv[])
{
	for (x = 1; x <= argc; x++)
		for (y = 0; argv[x] != '\0' && y < strlen(argv[x]); y++)
			if (isdigit(argv[x][y]) == 0)
				return (1);
	return (0);
}
/**
 * main - Program adds all arguments provided they are digits.
 * @argc: argument count should only accepts integer separated by spaces.
 * @argv: argument vector
 * Return: 0 for success, 1 for failure
 */
int main(int argc, char *argv[])
{
	int sum, x;

	sum = 0;
	if (verifier(argc, 1, 0, argv) == 1)
	{
		printf("Error\n");
		return (1);
	}
	for (x = 1; x < argc; x++)
		sum += atoi(argv[x]);
	printf("%d\n", sum);
	return (0);
}
