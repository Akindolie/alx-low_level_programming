/**
 * _strncpy - copies a string up to n
 * @destn: destnination of the pointer to the string
 * @src: Source of the pointer to the string to copy
 * @n: Number of bytes to copy.
 * Return: Pointer to the destnination string.
 */

char *_strncpy(char *destn, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		destn[i]	= src[i];
	while (i < n)
		destn[i++] = '\0';
	return (destn);
}
