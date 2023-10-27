#include "main.h"

/**
 * _strcpy - Copies a string from source to destination buffer.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * Return: Pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
