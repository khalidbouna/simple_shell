#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

extern char **environ;

char *read_line(void);
char **parse_arguments(char *input);
char *find_command(char *command);
int execute_command(char *command);
int is_exit_builtin(char *command);
int is_env_builtin(char *command);

#endif /* SIMPLE_SHELL_H */
