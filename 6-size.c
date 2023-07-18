
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int v_1;
	long int v_2;
	long long int v_3;
	char v_4;
	float v_5;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(v_4));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(v_1));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(v_2));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(v_3));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(v_5));
	return (0);
}
