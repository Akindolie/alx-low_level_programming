#include "main.h"

/**
 * _strspn - Calculate the length of a prefix substring.
 * @s: The input string to search.
 * @accept: The string containing bytes to compare with.
 * Return: The number of bytes at the beginning of 's' that match any byte in 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int search_index, accept_index;

	search_index = 0;
	while (s[search_index] != '\0')
	{
		accept_index = 0;
		while (accept[accept_index] != '\0' && s[search_index] != accept[accept_index])
			accept_index++;
		if (accept[accept_index] == '\0')
			return search_index;
		search_index++;
	}
	return search_index;
}
