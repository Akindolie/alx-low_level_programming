/**
 * is_upper - Checks if a character is uppercase.
 * @character: The character to check.
 * Return: 1 if the character is uppercase, 0 otherwise.
 */
int is_upper(int character)
{
	if (character >= 'A' && character <= 'Z')
		return (1);
	else
		return (0);
}
