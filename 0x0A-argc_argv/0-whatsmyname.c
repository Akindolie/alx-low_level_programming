#include <stdio.h>

/**
 * main - Entry point of the program, prints its own name.
 * @argc: Argument count
 * @argv: Argument vector
 * 
 * Return: Always returns 0 to indicate success.
 */
int main(int argc, char *argv[])
{
    argc--; /* Decrement argc to pass checks */
    printf("%s\n", argv[0]);
    return (0);
}
