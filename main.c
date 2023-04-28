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
	char **cmd = NULL, **pt = NULL;
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
		free_buffer_function(pt);
		free(inpath);
		cue_user();
		sz = getline(&lc, &fr, stdin);
		if (!sz && sz < 0)
			break;
		info.ln_count++;
		if (lc[sz - vl] == '\n')
			lc[sz - vl] = '\0';
		cmd = gen_token(lc);
		if (cmd == NULL || *cmd == NULL || **cmd == '\0')
			continue;
		if (analyzer(cmd, lc))
			continue;
		cp = find_path();
		pt = gen_token(cp);
		inpath = validate_path(pt, cmd[0]);
		if (!inpath)
			perror(argvect[0]);
		implementation(inpath, cmd);
	}
	if (sz < 0 && flags.interactive)
		write(STDERR_FILENO, "\n", vl);
	free(lc);
	return (0);
}
