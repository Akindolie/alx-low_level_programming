#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - Creates a duplicate of a string in a new buffer
 * @strVal: the string to duplicate
 * Return: pointer to a new buffer
 */
char *_strdup(char *strVal)
{
	char *x;
	unsigned int len, y;

	if (strVal == NULL)
		return (NULL);
	for (len = 0; strVal[len] != '\0'; len++)
		;
	len++;
	if (len < 1)
		return (NULL);
	x = malloc(len * sizeof(char));
	if (x == NULL)
	{
		free(x);
		return (NULL);
	}
	for (y = 0; y < len; y++)
		x[y] = strVal[y];
	x[y] = '\0';
	return (x);
}
