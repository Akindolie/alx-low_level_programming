#include <stdio.h>

/**
 * verifier - Checks recursively if a number is prime.
 * @numb: Iterator
 * @baseVal: Number to check for primality
 *
 * Return: 1 if baseVal is prime, otherwise return 0.
 */
int verifier(int numb, int baseVal)
{
	if (baseVal % numb == 0 || baseVal < 2)
		return (0);
	else if (numb == baseVal - 1)
		return (1);
	else if (baseVal > numb)
		return (verifier(numb + 1, baseVal));
	return (1);
}

/**
 * is_prime_number - Checks if a number is a prime number.
 * @numb: The number to check for primality
 *
 * Return: 1 if numb is prime, otherwise return 0.
 */
int is_prime_number(int numb)
{
	return (verifier(2, numb));
}
