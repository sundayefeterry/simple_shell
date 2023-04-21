#include "shell.h"
/**
 * create_new_path - integrate newpath[newpath] to input
 * @command: user-specified input
 * @newpath: newpath of input
 * Return: newpath on success or NULL
 */
char *create_new_path(char *newpath, char *command)
{
	size_t f = 0, s = 0;

	if (!command)
		command = "";
	if (!newpath)
		newpath = "";

	char *bfr = malloc(sizeof(char) * (_lnt_str(newpath) + _lnt_str(command) + 2));

	if (!bfr)
		return (NULL);
	while (newpath[f] != '\0')
		bfr[f] = newpath[f];
	f++;
	if (newpath[f - 1] != '/')
		bfr[f] = '/';
	f++;
	while (command[s] != '\0')
		bfr[f + s] = command[s];
	s++;
	bfr[f + s] = '\0';

	return (bfr);
}
