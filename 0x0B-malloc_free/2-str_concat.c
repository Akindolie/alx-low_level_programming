#include <stdlib.h>
/**
 * str_concat - Outputs concatenates two strings
 * @str1: first string parameter
 * @str2: second string parameter
 * Return: pointer to a new buffer containing str1 and str2
 */
char *str_concat(char *str1, char *str2)
{
	char *p;
	int str1counter, str2counter, sizeBuffer, index;

	/*Check for valid strings*/
	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";
	for (str1counter = 0; str1[str1counter]; str1counter++)
		;
	for (str2counter = 0; str2[str2counter]; str2counter++)
		;
	sizeBuffer = str1counter + str2counter + 1;
	p = malloc(sizeBuffer * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (index = 0; index < sizeBuffer; index++)
		index < str1counter ? (p[index] = str1[index]) : (p[index] = str2[index - str1counter]);
	return (p);
}
