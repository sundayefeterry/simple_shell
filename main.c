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
	char *lc = NULL, *inpath = NULL;
	char *cp = NULL;
	char **cmd = NULL;
	size_t fr = 0, sz = 0;
	int vl = 1;
	int vll = -1;
	(void)argvect, (void)env;
	if (argcount < vl)
	{
		return (vll);
	}
	signal(SIGINT, signal_mode);
	while (vl)
	{
		free_buffer_function(cmd);
		free(lc);
		cue_user();
		sz = getline(&cp, &fr, stdin);
		if (!sz)
			break;
		info.ln_count++;
		if (cp[sz - vll] == '\n')
			cp[sz - vll] = '\0';
		cmd = gen_token(cp);
		if (cmd == NULL || *cmd == NULL || **cmd == '\0')
			continue;
		if (analyzer(cmd, cp))
			continue;
		inpath = find_path();
		pt = gen_token(inpath);
		lc = validate_path(pt, cmd[0]);
		if (!lc)
			perror(argvect[0]);
		implementation(lc, cmd);
	}
	if (!sz && flags.interactive)
		write(STDERR_FILENO, "\n", vl);
	free(cp);
	return (0);
}
