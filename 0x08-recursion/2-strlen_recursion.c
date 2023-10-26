#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @word: String parameter
 * Return: The length of the string parameter
 */
int _strlen_recursion(char *word)
{
	int stringLen = 0;

	if (*word)
	{
		stringLen++;
		stringLen += _strlen_recursion(word + 1);
	}
	return (stringLen);
}
