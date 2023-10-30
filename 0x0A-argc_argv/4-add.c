#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_valid_input - checks if the input arguments are valid digits
 * @argc: the argument count
 * @index: the current index in argv[]
 * @char_index: the index for characters in argv[index]
 * @argv: the argument vector
 *
 * Return: 0 on success (valid input), 1 on failure (invalid input)
 */
int is_valid_input(int argc, int index, unsigned int char_index, char *argv[]) {
    for (index = 1; index < argc; index++) {
        for (char_index = 0; argv[index][char_index] != '\0'; char_index++) {
            if (!isdigit(argv[index][char_index])) {
                return 1; // Invalid input
            }
        }
    }
    return 0; // Valid input
}

/**
 * main - adds all valid integer arguments together.
 * @argc: the argument count, only accepts valid integers separated by spaces.
 * @argv: the argument vector
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[]) {
    int sum = 0;
    int i;

    if (is_valid_input(argc, 1, 0, argv) == 1) {
        printf("Error\n");
        return 1; // Invalid input
    }

    for (i = 1; i < argc; i++) {
        sum += atoi(argv[i]);
    }

    printf("%d\n", sum);
    return 0; // Success
}
