#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: always 0
 */
int main(void)
{
	int number;

	while (number < 10)
	{
		printf("%i", number);
		number++;
	}

	putchar('\n');

	return (0);
}
