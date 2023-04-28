#include "main.h"

/**
 * _checkingtrings - this function compares two strings to check if it'str same
 * @str1: checking with str2.
 * @str2: checking with str1.
 *
 * Return: difference between 2 strings..
 */

int _checkingtrings(char *str1, char *str2)
{
	int input;
	int output;

	input = 0;

	while (*(str1 + input) == *(str2 + input) && *(str1 + input) != '\0')
	{
		input++;
	}

	output = (*(str1 + input) - *(str2 + input));

	return (output);
}
