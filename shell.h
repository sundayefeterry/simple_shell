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

/* */
extern char **environ;
extern __sighandler_t signal(int __sig, __sighandler_t __handler);

/* program parts || declaration */
int analyser(char **command, char *buffer); /* analyser to see if it's built in function */
void cue_user(void); /* cue the user to enter an input */
void signal_mode(int mode); /* checks if it's in interactive mode */
char **tokenizer(char *line_tkn); /* creates tokens from user input */
char *validate_path(char **mypath, char *command); /* checks to validate path */
char *append_path(char *path, char *command); /* appends path */
int builtin(char **command, char *line); /* track handler */
void exit_shell(char **command, char *line); /* exit() */
void print_out(void); /* prints to stdout */

/* execution commands */
void execution(char *cp, char **cmd); /* executes commands */
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
struct builtin
{
	char *env, *exit;
} builtin;

struct info
{
	int final_exit, ln_count;
} info;

struct flags
{
	bool interactive;
} flags;

#endif /* SHELL_H */
