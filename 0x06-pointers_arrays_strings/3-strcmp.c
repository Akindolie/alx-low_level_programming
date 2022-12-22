/**
 * _strcmp - compares two strings, ending at the first byte that is different.
 * @str1: string to be compared
 * @str2: string to compare by
 * Return: the difference between the first character that are not the same
 */
int _strcmp(char *str1, char *str2)
{
	int i;

	for (i = 0; str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]; i++)
		;
	return (str1[i] - str2[i]);
}
