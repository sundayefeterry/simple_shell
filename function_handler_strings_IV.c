#include "main.h"

/**
 * _duplicatestring - this function dupicate string
 * @str: duplicated string
 *
 * Return: *duplicated string
 */

char *_duplicatestring(char *str)
{
	char *ptr;
	int input = 0;
	int len_t;
	int val = 1;

	if (str == NULL)
	{
		return (NULL);
	}

	len_t = _len_str(str);

	ptr = malloc(sizeof(char) * (len_t + val));

	if (!ptr)
	{
		return (NULL);
	}
	for (input = 0; *str != '\0'; str++, input++)
	{
		ptr[input] = str[0];
	}

	ptr[input++] = '\0';

	return (ptr);
}