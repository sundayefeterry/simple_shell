**ALL CONCEPT**
int analyser(char **command, char *buffer); /* analyser to see if it's built in function */
void cue_user(void); /* cue the user to enter an input */
void signal_mode(int mode); /* checks if it's in interactive mode */
char **tokenizer(char *line_tkn); /* creates tokens from user input */
char *validate_path(char **mypath, char *command); /* checks to validate path */
char *append_path(char *path, char *command); /* appends path */
int command_builtin(char **command, char *commandpath); /* track handler */
void exit_shell(char **command, char *line); /* exit() */
void print_out(void); /* prints to stdout */

/* execution commands */
void execution(char *cp, char **cmd); /* executes commands */
char *find_path(void);

/* executes user input commands */
void free_buffers(char **buf);

**Made some untracked changes**
**Check README.md && main.h**
**Un-tracked files**