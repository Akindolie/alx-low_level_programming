#include <stdio.h>
/**
 * main - Entry point of the program, prints its own name.
 * @argc: argument count
 * @argv: argument vectors
 * Return: Always returns 0 to indicate success.
 */
int main(int argc, char *argv[])
{
	argc--;
	printf("%s\n", argv[0]);
	return (0);
}
