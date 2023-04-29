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

#define BUFFER_SIZE 1024
#define DELIM "\t\r\n\a"
#define UNUSED(x) (void)(x)

struct standardbuiltin
{
	char *env, *exit;
} standardbuiltin;

struct info
{
	int final_exit, ln_count;
} info;

struct flags
{
	bool interactive;
} flags;

/* program parts || declaration */
int analyzer(char **command, char *buffer);
void cue_user(void);
void signal_mode(int mode);
char **gen_token(char *line_tkn);
char *validate_path(char **np, char *command);
char *create_new_path(char *np, char *command);
int command_builtin(char **command, char *commandpath);
void exit_shell(char **command, char *line_tkn);
void print_out(void);
void implementation(char *exe, char **command);
char *find_path(void);
void free_buffer_function(char **buffer);

char *create_new_path(char *np, char *command);

int _checkingtrings(char *str1, char *str2);
int _len_str(char *lng_str);
int _compstring(char *str1, char *str2, int num);
char *_duplicatestring(char *str);
char *_stringcharacter(char *str, char strchar);

extern char **environ;
extern __sighandler_t signal(int __sig, __sighandler_t __handler);

#endif /* MAIN_H */
