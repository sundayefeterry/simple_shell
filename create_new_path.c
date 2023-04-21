#include "shell.h"
/**
 * create_new_path - integrate newpath[np] to input
 * @cmd: user-specified input
 * @np: newpath of input
 * Return: newpath on success or NULL
 */
char *create_new_path(char *np, char *cmd)
{
	size_t f = 0, s = 0;

	if (!cmd)
		cmd = "";
	if (!np)
		np = "";

	char *bfr = malloc(sizeof(char) * (_lenghtofstring(np) + _lenghtofstring(cmd) + 2));

	if (!bfr)
		return (NULL);
	while (np[f] != '\0')
		bfr[f] = np[f];
	f++;
	if (np[f - 1] != '/')
		bfr[f] = '/';
	f++;
	while (cmd[s] != '\0')
		bfr[f + s] = cmd[s];
	s++;
	bfr[f + s] = '\0';

	return (bfr);
}
