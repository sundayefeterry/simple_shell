#include "main.h"

/**
 * _len_str - this function adss to the length of string passed.
 * @lng_str: named string.
 *
 * Return: length.
 */

int _len_str(char *lng_str)
{
	int add_str = 0;

	while (*lng_str != '\0')
	{
		add_str++;
		lng_str++;
	}
	return (add_str);
}
