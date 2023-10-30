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
	int str1cntr, str2cntr, sizeBuffer, idx;

	/*Check for valid strings*/
	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";
	for (str1cntr = 0; str1[str1cntr]; str1cntr++)
		;
	for (str2cntr = 0; str2[str2cntr]; str2cntr++)
		;
	sizeBuffer = str1cntr + str2cntr + 1;
	p = malloc(sizeBuffer * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (idx = 0; idx < sizeBuffer; idx++)
		idx < str1cntr ? (p[idx] = str1[idx]) : (p[idx] = str2[idx - str1cntr]);
	return (p);
}
