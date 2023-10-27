#include "main.h"

/**
 * _isalpha - Checks if a character is an English alphabet letter.
 * @c: The character to be evaluated.
 * 
 * Return: 1 if 'c' is an English alphabet letter, 0 otherwise.
 */
int _isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    else
        return (0);
}
