#include <stdio.h>
/**
  * verifier - checks recursively the input from is_prime_number
  * @n: an integer to iterate with
  * @baseVal: baseVal number to check
  * Return: 1 if n is a prime, else return 0 if n is not a prime.
  */
int verifier(int n, int baseVal)
{
	if (baseVal % n == 0 || baseVal < 2)
		return (0);
	else if (n == baseVal - 1)
		return (1);
	else if (baseVal > n)
		return (verifier(n + 1, baseVal));
	return (1);
}
/**
  * is_prime_number - checks if a number is a prime number or not
  * @numb: the number to check
  * Return: 1 if numb is a prime, else return 0 if numb is not.
  */
int is_prime_number(int numb)
{
	return (verifier(2, numb));
}
