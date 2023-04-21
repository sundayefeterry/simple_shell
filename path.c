#include "shell.h"
/**
 * find_path - locate and execute the command from the global environment
 * Return: 0
 */
char *find_path(void)
{
	int src;
	char **env = environ;
	char *path = NULL;

	while (*env)
	{
		if (_compstring(*env, "PATH=", 5) == 0)
		{
			path = *env;
			while (*path && src < 5)
			{
				path++;
				src++;
			}
			return (path);
		}
		env++;
	}
	return (NULL);
}
