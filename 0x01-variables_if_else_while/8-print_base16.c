#include <stdio.h>
/**
 * main -  prints all the numbers of base 16 in lowercase
 *
 * Return: always 0
 */
int main(void)
{
	int n = '0';
	int a_2_f = 'a';

	while (n <= '9') /*print 0-9*/
	{
		putchar(n);
		n++;
	}

	while (a_2_f <= 'f') /*print a-f to finish hex base*/
	{
		putchar(a_2_f);
		a_2_f++;
	}

	putchar('\n');

	return (0);
}
