#include "main.h"

/**
 * _compstring - this function compares strings.
 * @str1: compare str2 and str1.
 * @str2: compared str1 and str2
 * @num: number of bytes of strings.
 *
 * Return: num;
 */

int _compstring(char *str1, char *str2, int num)
{
	int input = 0;

	for (input = 0; str1[input] && str2[input] && input < num; input++)
	{
		if (str1[input] != str2[input])
		{
			return (str1[input] - str2[input]);
		}
	}
	return (0);
}