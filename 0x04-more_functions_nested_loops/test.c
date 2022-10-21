#include "main.h"
/**
 * main - called _isupper function to check if an input is uppercase or not
 *
 * Return: always 0 (success)
 */
int main(void)
{
	/*variable initialization*/
	int user_input;
	int checker;

	user_input = getchar(); /*capture input from user*/
	checker = _isupper(user_input); /*checks if input is uppercase*/

	if (checker == 1)
	{
		printf("the character %c is an uppercase\n", user_input);
	}
	else
	{
		printf("the character %c is not an uppercase or not an alphabet\n", user_input);
	}
	return (0);
}
