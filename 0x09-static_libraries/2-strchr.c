#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string
 * @s: A pointer to the input string
 * @c: The character to find
 *
 * Return: A pointer to the first occurrence of character 'c'
 *         within the string 's,' or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
            return (s);
        else if (*(s + 1) == c)
            return (s + 1);
        s++;
    }
    return (s + 1);
}
