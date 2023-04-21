#include "shell.h"
/**
 * create_new_path - integrate np[np] to input
 * @command: user-specified input
 * @np: np of input
 * Return: np on success or NULL
 */
char *create_new_path(char *np, char *command)
{
	size_t f = 0, s = 0;

	if (!command)
		command = "";
	if (!np)
		np = "";

	char *bfr = malloc(sizeof(char) * (_len_str(np) + _len_str(command) + 2));

	if (!bfr)
		return (NULL);
	while (np[f] != '\0')
		bfr[f] = np[f];
	f++;
	if (np[f - 1] != '/')
		bfr[f] = '/';
	f++;
	while (command[s] != '\0')
		bfr[f + s] = command[s];
	s++;
	bfr[f + s] = '\0';

	return (bfr);
}
