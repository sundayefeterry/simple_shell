#include "main.h"
/**
 * main - this reads and execute our while(1) loop
 * @argcount: count [argument]
 * @argvect: vector [argument]
 * @env: the [environment] vector
 *
 * Return: 0
 */
int main(int argcount, char **argvect, char *env[])
{	
	char *linecommand = NULL, *inpath = NULL, *commandpath = NULL;
	char **command = NULL, **paths = NULL;
	size_t buffersize = 0, sizeinline = 0;
	int vl = 1, vall = -1;

	(void)argvect, (void)env;

	if (argcount < vl)
		return (vall);
	signal(SIGINT, signal_mode);
	while (vl)
	{
		free_buffers(command);
		free_buffers(paths);
		free(linecommand);
		cue_user();
		sizeinline = getline(&commandpath, &buffersize, stdin);
		if (!sizeinline)
			break;
		info.ln_count++;
		if (commandpath[sizeinline - vall] == '\n')
			commandpath[sizeinline - vall] = '\0';
		command = tokenizer(commandpath);
		if (command == NULL || *command == NULL || **command == '\0')
			continue;
		if (analyser(command, commandpath))
			continue;
		inpath = find_path();
		paths = tokenizer(inpath);
		linecommand = validate_path(paths, command[0]);
		if (!linecommand)
			perror(argvect[0]);
		else
			execution(linecommand, command);
	}
	if (!sizeinline && flags.interactive)
		write(STDERR_FILENO, "\n", 1);
	free(commandpath);
	return (0);
}
