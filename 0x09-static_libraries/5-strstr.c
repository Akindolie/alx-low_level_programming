#include "main.h"
#include <stdlib.h>

/**
 * _strncmp - Compare two strings within a specified number of bytes.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 * @n: The maximum number of bytes to compare.
 * Return: 0 if the strings match within the specified bytes, else a non-zero value.
 */
int _strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n && *s1 == *s2 && *s1 != '\0' && *s2 != '\0'; i++)
	{
		s1++;
		s2++;
	}
	return (i - n);
}

/**
 * _strstr - Locate a substring within a string.
 * @haystack: The string to search within.
 * @needle: The substring to find.
 * Return: A pointer to the first occurrence of 'needle' in 'haystack', or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int needle_len;

	/* Determine the length of the 'needle' for _strncmp */
	needle_len = 0;
	while (needle[needle_len] != '\0')
		needle_len++;

	/* Search for the substring */
	while (*haystack != '\0')
	{
		if (_strncmp(haystack, needle, needle_len) == 0)
			return (haystack);
		haystack++;
	}

	return (NULL);
}
