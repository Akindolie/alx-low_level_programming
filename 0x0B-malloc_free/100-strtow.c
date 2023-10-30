#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * wordCounter - Counts every word and the letters in them
 * @str: string parameter to count
 * @pos: The position of the word to count characters from
 * @firstChar: position of the first letter of the word
 * if pos = 0, count d number of chars in d word
 * else count number of words
 * Return: wordCount if pos == 0,
 * length of word if pos > 0,
 * position of word if pos > 0 && firstChar > 0
 */
int wordCounter(char *str, int pos, char firstChar)
{
	int idx, wordCount, charCount, flag;

	str[0] != ' ' ? (wordCount = 1) : (wordCount = 0);
	for (idx = 0, flag = 0; str[idx]; i++)
	{
		if (str[idx] == ' ' && str[idx + 1] != ' ' && str[idx + 1] != '\0' && flag == 0)
		{
			wordCount++;
			flag = 1;
		}
		if (pos > 0 && pos == wordCount)
		{
			if (pos > 0 && pos == wordCount && firstChar > 0)
				return (idx);
			for (charCount = 0; str[idx + charCount + 1] != ' '; charCount++)
				;
			return (charCount);
		}
		if (str[idx] == ' ')
			flag = 0;
	}
	return (wordCount);
}
/**
 * strtow - Program converts a string into a 2d array of words
 * @str: The string parameter to convert
 * Return: double pointer to 2d array
 */
char **strtow(char *str)
{
	int w_c, wordLen, getfirstChar, len, i, j;
	char **p;

	for (len = 0; str[len]; len++)
		;
	if (str == NULL)
		return (NULL);
	w_c = wordCounter(str, 0, 0);
	if (len == 0 || w_c == 0)
		return (NULL);
	p = malloc((w_c + 1) * sizeof(void *));
	if (p == NULL)
		return (NULL);
	for (i = 0, wordLen = 0; i < w_c; i++)
	{
		/* Allocate memory for nested elements */
		wordLen = wordCounter(str, i + 1, 0);
		if (i == 0 && str[i] != ' ')
			wordLen++;
		p[i] = malloc(wordLen * sizeof(char) + 1);
		if (p[i] == NULL)
		{
			for ( ; i >= 0; --i)
				free(p[i]);
			free(p);
			return (NULL);
		}
		/* initialize each element of the nested array with the word*/
		getfirstChar = wordCounter(str, i + 1, 1);
		if (str[0] != ' ' && i > 0)
			getfirstChar++;
		else if (str[0] == ' ')
			getfirstChar++;
		for (j = 0; j < wordLen; j++)
			p[i][j] = str[getfirstChar + j];
		p[i][j] = '\0';
	}
	p[i] = NULL;
	return (p);
}
