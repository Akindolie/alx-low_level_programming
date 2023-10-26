#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - returns the length of a input string.
 * @strVal: the string parameter
 * Return: length of the string parameter
 */
int _strlen_recursion(char *strVal)
{
	if (*strVal)
	{
		strVal++;
		return (1 + _strlen_recursion(strVal));
	}
	return (0);
}
/**
 * verifier - func to help for is_palindrome
 * @strVal: the string parameter
 * @len: length of string parameter
 * @counter: counter of recursion
 * Return: returns 1 if string is a palindrome, 0 if it is not a palindrome.
 */
int verifier(char *strVal, int len, int counter)
{
	if (counter >= len)
		return (1);
	if (strVal[len] == strVal[counter])
		return (verifier(strVal, len - 1, counter + 1));
	return (0);
}
/**
 * is_palindrome - checks if the input string is a palindrome
 * @strVal: the string to check
 * Return: 1 if string is a palindrome, 0 if it is not a palindrome.
 */
int is_palindrome(char *strVal)
{
	int len = _strlen_recursion(strVal);
	int counter = 0;

	return (verifier(strVal, len - 1, counter));
}
