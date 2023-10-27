#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted
 *
 * This function takes a string and converts it into an integer.
 * It considers leading '-' signs for negative values.
 *
 * Return: The converted integer, or 0 if no valid integer is found.
 */
int _atoi(char *s)
{
	int i, sign, result;

	i = sign = result = 0;
	sign = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result -= (s[i] - '0');
		}
		else if (result != 0)
			break;
		i++;
	}

	result *= sign;
	return (result);
}
