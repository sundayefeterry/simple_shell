#include "shell.h"
/**
 * find_path - locate and execute the command from the global environment
 * Return: 0
 */
char *find_path(void)
{
	int src;
	char **environment = environ;
	char *path = NULL;

	while (*environment)
	{
		if (_compstring(*environment, "PATH=", 5) == 0)
		{
			path = *environment;
			while (*path && src < 5)
			{
				path++;
				src++;
			}
			return (path);
		}
		environment++;
	}
	return (NULL);
}
