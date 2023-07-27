/**
 * _strcat - concatenates two strings
 * @destn: pointer to the destnination string
 * @src: pointer to the source string
 * Return: pointer to the resulting string destn
 */

char *_strcat(char *destn, char *src)
{
	int i, j;

	i = 0;
	for (j = 0; destn[j] != '\0'; j++)
		;
	while (src[i] != '\0')
	{
		destn[j + i] = src[i];
		i++;
	}
	return (destn);
}
