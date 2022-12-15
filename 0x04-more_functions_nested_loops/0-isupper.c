/**
 * _isupper - checks for uppercase.
 * @xtr: character to check.
 * Return: 1 if xtr is uppercase, otherwise return 0.
 */
int _isupper(int xtr)
{
	if (xtr >= 'A' && xtr <= 'Z')
		return (1);
	else
		return (0);
}
