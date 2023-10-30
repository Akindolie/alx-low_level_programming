#include <stdio.h>

/**
 * main - Entry point of the program, prints its own name.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always returns 0 to indicate success.
 */
int main(int argc, char *argv[]) {
    if (argc > 0)
    {
        printf("%s\n", argv[0]);
    }
    else
    {
        printf("Program name not available.\n");
    }

    return 0;
}
