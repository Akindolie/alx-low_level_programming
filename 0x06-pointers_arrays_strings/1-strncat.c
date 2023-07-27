/**
 * _strncat - concatenates two strings
 * @destn: pointer to the destnination string
 * @src: pointer to the source string
 * @n: number of bytes to print
 * Return: pointer to the resulting string destn
 */

char *_strncat(char *destn, char *src, int n)
{
	int i, j;

	i = 0;
	for (j = 0; destn[j] != '\0'; j++)
		;
	while (src[i] != '\0' && i < n)
	{
		destn[j + i] = src[i];
		i++;
	}
	return (destn);
}
