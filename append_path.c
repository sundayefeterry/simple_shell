#include "shell.h"
/**
 * append_path - integrate path to cmd
 * @command: user-specified cmd
 * @path: path of cmd
 *
 * Return: buffer containing cmd with path on success
 * Return NULL when unsuccessful
 */
char *append_path(char *path, char *command)
{
	char *buf_ptr;
	size_t i = 0;
	size_t j = 0;

	if (command == NULL)
		command = "";

	if (path == NULL)
		path = "";

	char *buf = malloc(sizeof(char) * (_strlen(path) + _strlen(command) + 2));

	if (!buf)

		return (NULL);

	while (path[i] != '\0')
	{
		buf[i] = path[i];
		i++;
	}

	if (path[i - 1] != '/')
	{
		buf[i] = '/';
		i++;
	}
	while (command[j] != '\0')
	{
		buf[i + j] = command[j];
		j++;
	}
	buf[i + j] = '\0';
	return (buf);
}
