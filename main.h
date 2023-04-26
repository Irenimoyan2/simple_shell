#ifndef MAIN_H
#define MAIN_H
#define PATH "PATH"
#define DEBUG 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

typedef struct
{
	char** tokens;
	int num_tokens;
	int status_code;
} token_array;

void execute(char **values, const char *path, char **envp);
char *which(char **cmd, const char *path);
int input_handler(char *prompt, char **input, char **input_copy);
int input_parser(char **inpt, char **inpt_cpy, char **cmd_array);
int is_builtin(char **command_array);
int builin_handler(char **command_array, char **envp);
ssize_t _get_command_line(char **ptr, size_t *n, int fd);

#endif
