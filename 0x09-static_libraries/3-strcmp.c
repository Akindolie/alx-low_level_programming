#include "main.h"

/**
 * _strcmp - Compares two strings, stopping at the first differing character.
 * @str1: The first string to compare.
 * @str2: The second string to compare against.
 * Return: The difference between the first differing characters.
 */
int _strcmp(char *str1, char *str2)
{
    int index;

    for (index = 0; str1[index] != '\0' && str2[index] != '\0' && str1[index] == str2[index]; index++)
        ;

    return (str1[index] - str2[index]);
}
