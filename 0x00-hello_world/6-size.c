
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int v_int;
	long int v_lng_int;
	long long int v_lng_lng_int;
	char v_char;
	float v_float;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(v_char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(v_int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(v_lng_int));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(v_lng_lng_int));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(v_float));
	return (0);
}
