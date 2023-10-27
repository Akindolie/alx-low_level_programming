#include "main.h"

/**
 * _puts - Prints a given string, followed by a newline character.
 * @s: The string to be printed.
 */
void _puts(char *s)
{
    while (*s != '\0')
    {
        _putchar(*s);
        s++;
    }
    _putchar('\n');
}
