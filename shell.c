#include "shell.h"

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
    char *inline;
    char *commandpath;
    char *inpath;

    inline = NULL;
    commandpath = NULL;
    inpath = NULL;

    size_t buffersize;
    ssize_t sizeinline;

    buffersize = 0;
    sizeinline = 0;

    char **command = NULL;
    char **paths = NULL;

    (void)env, (void)argvect;
    if (argcount < 1)
    {
        return (-1);
    }
    signal(SIGINT, handle_signal);

    while (1)
    {
        free_buffers(command);
        free_buffers(paths);
        free(commandpath);
        prompt_user();
        sizeinline = getinline(&inline, &buffersize, stdin);
        if (sizeinline < 0)
        {
            break;
        }
        info.ln_count++;
        if (inline[sizeinline - 1] == '\n')
        {
            inline[sizeinline - 1] = '\0';
        }
        command = tokenizer(inline);
        if (command == NULL || *command == NULL || **command == '\0')
        {
            continue;
        }

        if (checker(command, inline))
        {
            continue;
        }
        inpath = find_path();
        paths = tokenizer(inpath);
        commandpath = test_path(paths, command[0]);
        if (!commandpath)
        {
            perror(argvect[0]);
        }
        else
        {
            execution(commandpath, command);
        }
    }
    if (sizeinline < 0 && flags.interactive)
    {
        write(STDERR_FILENO, "\n", 1);
    }

    free(inline);

    return (0);
}
