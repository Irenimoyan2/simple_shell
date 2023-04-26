#ifndef _MAIN_H_
#define _MAIN_H_
#include <signal.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#define DELIM " ,!¡¿?\'\"\n\t"
#define STDOUT STDOUT_FILENO
#define STDIN STDIN_FILENO
#define STDERR STDERR_FILENO

extern char **environ;
char **tokenizer(char *BUFF);
char *check_path(char **Arg_str);
void print_error(char *CMD);
int built_in(char **Arg_str, int ct_output, char *row);
int execute(char **Arg_str, int ct_output, char *row);
int run(char **Arg_str, int ct_output);
int compare_args(char **Arg_str, int ct_output);
void handle_signal(int sig);
char *read_row(void);
char *get_env(void);
int string_len_compare(char *string_1, char *string_2, int len);
char *string_copy(char *dest, char *src);
char *string_concatenate(char *dest, char *src);
int string_compare(char *string_1, char *string_2);
int string_length(char *a);

#endif
