#include "shell.h"
/**
 * create_new_path - integrate newpath[p] to input
 * @c: user-specified input
 * @p: newpath of input
 * Return: newpath on success or NULL
 */
char *create_new_path(char *p, char *c)
{
	size_t f = 0, s = 0;

	if (!c)
		c = "";
	if (!p)
		p = "";

	char *bfr = malloc(sizeof(char) * (_lenghtofstring(p) + _lenghtofstring(c) + 2));

	if (!bfr)
		return (NULL);
	while (p[f] != '\0')
		bfr[f] = p[f];
	f++;
	if (p[f - 1] != '/')
		bfr[f] = '/';
	f++;
	while (c[s] != '\0')
		bfr[f + s] = c[s];
	s++;
	bfr[f + s] = '\0';

	return (bfr);
}
