#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Add positive numbers.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
    int sum = 0;

    if (argc == 1)
    {
        /* No numbers passed, print 0 and return. */
        printf("0\n");
        return 0;
    }

    for (int i = 1; i < argc; i++)
    {
        for (int j = 0; argv[i][j]; j++)
        {
            if (!isdigit(argv[i][j]))
            {
                /* If a non-digit character is found, print Error and return 1. */
                printf("Error\n");
                return 1;
            }
        }

        /* Convert the valid string to an integer and add it to the sum. */
        sum += atoi(argv[i]);
    }

    /* Print the sum of positive numbers. */
    printf("%d\n", sum);
    return 0;
}
