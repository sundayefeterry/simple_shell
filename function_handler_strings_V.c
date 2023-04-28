#include "main.h"

/**
 * _stringcharacter - pionter to a character in string
 * @str: string
 * @strchar: pionter string
 *
 * Return: pointer to first string occurence & NULL if not found
 */

char *_stringcharacter(char *str, char strchar)
{
	while (*str)
	{
		if (*str == strchar)
		{
			return (str);
		}
		str++;
	}
	if (!strchar)
	{
		return (str);
	}

	return (NULL);
}
