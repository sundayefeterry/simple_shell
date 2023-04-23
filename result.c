#include "main.h"

/**
 * _putchar - write character to standard output
 * @c: character
 *
 * Return: 1 || error -1 and set value to err_no
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_s - print string
 * @str: string
 *
 * Return: prints number of characters
 */
int print_s(char *str)
{
	int i_v = 0;

	while (str[i_v] != '\0')
	{
		_putchar(str[i_v]);
		i_v++;
	}

	return (i_v);
}
