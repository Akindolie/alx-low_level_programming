#include "main.h"

/**
 * _strpbrk - Search for a byte in a string that matches one of the bytes in a set.
 * @s: The string to be searched.
 * @accept: The set of bytes to compare against.
 * 
 * Return: A pointer to the first byte in 's' that matches any byte in 'accept', or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int search_index;

	while (*s != '\0')
	{
		for (search_index = 0; accept[search_index] != '\0'; search_index++)
		{
			if (*s == accept[search_index])
				return (s);
		}
		s++;
	}
	return (0);
}
