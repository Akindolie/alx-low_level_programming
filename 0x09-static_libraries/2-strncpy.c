#include "main.h"

/**
 * _strncpy - Copies a string up to a specified length
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string to copy
 * @n: Maximum number of bytes to copy
 * 
 * Return: Pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; src[index] != '\0' && index < n; index++)
		dest[index] = src[index];
	while (index < n)
		dest[index++] = '\0';
	return (dest);
}
