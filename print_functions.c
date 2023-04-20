#include "shell.h"
/**
 * _putchar - write the character c to standard output
 * @c: the character to print
 *
 * Return: 1
 * error, -1 is returned and sets the appropriate value of errno
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_s - prints string
 * @str: a string is printed
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
