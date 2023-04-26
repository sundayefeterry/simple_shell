#include "main.h"
/**
 * main - reads and execute while(1)
 * @argcount: count [arg]
 * @argvect: vector [arg]
 * @env: the [environment] vector
 * Return: 0
 */
int main(int argcount, char **argvect, char *env[])
{
	char *linecommand = NULL, *inpath = NULL, *commandpath = NULL, **command = NULL, **paths = NULL;
	size_t buffersize = 0, sizeinline = 0;
	int vl = 1, vall = -1;
	(void)argvect, (void)env;
	if (argcount < vl)
	{
		return (vall);
	}
	signal(SIGINT, signal_mode);
	while (vl)
		free_buffer_function(command);
		free_buffer_function(paths);
		free(linecommand);
		cue_user();
		sizeinline = getline(&commandpath, &buffersize, stdin);
		if (!sizeinline)
			break;

		info.ln_count++;
		if (commandpath[sizeinline - vall] == '\n')
			commandpath[sizeinline - vall] = '\0';
		command = gen_token(commandpath);
		if (command == NULL || *command == NULL || **command == '\0')
			continue;

		if (analyzer(command, commandpath))
			continue;

		inpath = find_path();
		paths = gen_token(inpath);
		linecommand = validate_path(paths, command[0]);
		if (!linecommand)
			perror(argvect[0]);
		else
			implementation(linecommand, command);
	if (!sizeinline && flags.interactive)
		write(STDERR_FILENO, "\n", vl);
	free(commandpath);
	return (0);
}
