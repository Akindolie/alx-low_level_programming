/**
 * _isdigit - checks for digits 1-9
 * @xtr: character to check.
 * Return: 1 if xtr is a digit, otherwise return 0.
 */
int _isdigit(int xtr)
{
	if (xtr >= '0' && xtr <= '9')
		return (1);
	else
		return (0);
}
