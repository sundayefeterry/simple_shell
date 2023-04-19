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
 * @s: a string is printed
 *
 * Return: prints number of characters
 */
int print_s(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	return (i);
}
