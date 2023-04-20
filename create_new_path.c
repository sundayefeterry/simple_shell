#include "shell.h"
/**
 * create_new_path - integrate newpath to input
 * @command: user-specified input
 * @newpath: newpath of input
 *
 * Return: newpath on success else NULL
 */
char *create_new_path(char *newpath, char *command)
{
	size_t first = 0;
	size_t second = 0;

	if (command == NULL || command == 0)
		command = "";

	if (newpath == NULL || newpath == 0)
		newpath = "";

	char *buffer = malloc(sizeof(char) * (_strlen(newpath) + _strlen(command) + 2));

	if (buffer == NULL)
		return (NULL);

	while (newpath[first] != '\0')
	{
		buf[first] = newpath[first];
		first++;
	}

	if (newpath[first - 1] != '/')
	{
		buf[first] = '/';
		first++;
	}
	while (command[second] != '\0')
	{
		buf[first + second] = command[second];
		second++;
	}
	buffer[first + second] = '\0';
	
	return (buf);
}
