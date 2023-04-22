#ifndef MAIN_H
#define MAIN_H

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

/* program parts || declaration */
int analyser(char **command, char *buffer);
void cue_user(void);
void signal_mode(int mode);
char **tokenizer(char *line_tkn);
char *validate_path(char **mypath, char *command);
char *create_new_path(char *np, char *command);
int command_builtin(char **command, char *commandpath);
void exit_shell(char **command, char *line);
void print_out(void);
void execution(char *exe, char **command);
char *find_path(void);
void free_buffers(char **buf);

int _checkingtrings(char *str1, char *str2);
int _len_str(char *lng_str);
int _compstring(char *str1, char *str2, int num);
char *_duplicatestring(char *str);
char *_stringcharacter(char *str, char strchar);

extern char **environ;
extern __sighandler_t signal(int __sig, __sighandler_t __handler);

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

#endif /* MAIN_H */
