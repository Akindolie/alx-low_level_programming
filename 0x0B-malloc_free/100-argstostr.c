#include <stdlib.h>
#include "main.h"
/**
 * argstostr - Outputs the concatenation of all
 * the arguments of your program.
 * @a_c: argument count
 * @a_v: pointer to argument vectors
 * Return: pointer to new buffer with all arguments as 1 string.
 */
char *argstostr(int a_c, char **a_v)
{
	int x, j, len, bufferlen;
	char *p;

	if (a_c == 0)
		return (NULL);
	if (a_v == NULL)
		return (NULL);

	x = y = len = bufferlen = 0;
	for (x = 0; a_v[x]; x++)
	{
		for (y = 0; a_v[x][y]; y++)
			len++;
	}
	p = (char *)malloc(len * sizeof(char) + a_c + 1);
	if (p == NULL)
		return (NULL);
	for (x = 0; a_v[x]; x++)
	{
		for (y = 0; a_v[x][y]; y++, bufferlen++)
			p[bufferlen] = a_v[x][y];
		p[bufferlen] = '\n';
		bufferlen++;
	}
	p[bufferlen] = '\0';
	return (p);
}

