#include "main.h"

/**
 * _islower - Checks if a character is a lowercase letter in the English alphabet.
 * @c: The character to be tested.
 *
 * Return: 1 if the input character is a lowercase letter, 0 if it is not.
 */
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    else
        return (0);
}
