#ifndef SHELL_H
#define SHELL_H

/* std system libs */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h>
#include <stdbool.h>

/* env variables */
extern char **environ;
extern __sighandler_t signal(int __sig, __sighandler_t __handler);

/* program parts || declaration */
int analyser(char **command, char *buffer);
void cue_user(void);
void signal_mode(int mode);
char **tokenizer(char *line_tkn);
char *validate_path(char **mypath, char *command);
char *append_path(char *path, char *command);
int command_builtin(char **command, char *commandpath);
void exit_shell(char **command, char *line);
void print_out(void);

/* execution commands */
void execution(char *cp, char **cmd);
char *find_path(void);

/* executes user input commands */
void free_buffers(char **buf);

/* all string handlers */
int _strcmp(char *str1, char *str2);
int _strlen(char *lng_str);
int _strncmp(char *str1, char *str2, int num);
char *_strdup(char *str);
char *_strchr(char *str, char vn);

/* */
struct standardbuiltin
{
	char *environment, *quit;
} standardbuiltin;

struct info
{
	int final_exit, ln_count;
} info;

struct flags
{
	bool interactive;
} flags;

#endif /* SHELL_H */
