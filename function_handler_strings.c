#include "shell.h"
/**
 * _checkingtrings - this function compares two strings to check if it'str same
 * @str1: checking with str2.
 * @str2: checking with str1.
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

/**
 * _len_str - this function adss to the length of string passed.
 * @lng_str: named string.
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

/**
 * _compstring - this function compares strings.
 * @str1: compare str2 and str1.
 * @str2: compared str1 and str2
 * @num: number of bytes of strings.
 * Return: num;
 */
int _compstring(char *str1, char *str2, int num)
{
	int input;

	for (input = 0; str1[input] && str2[input] && input < num; input++)
	{
		if (str1[input] != str2[input])
		{
			return (str1[input] - str2[input]);
		}
	}
	return (0);
}

/**
 * _duplicatestring - this function dupicate string
 * @str: duplicated string
 * Return: *duplicated string
 */
char *_duplicatestring(char *str)
{
	char *ptr;
	int input;
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

/**
 * _stringcharacter - pionter to a character in string
 * @str: string
 * @strchar: pionter string
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
