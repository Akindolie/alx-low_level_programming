#include "main.h"

/**
 * strlen - Calculates the length of an input string.
 * @str: Pointer to the character array.
 *
 * Return: The calculated length of the string.
 */
int strlen(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	return (length);
}
