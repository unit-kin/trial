#ifndef shellHead
#define shellHead
#define _GNU_SOURCE
#include "string.h"
#include "printf.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
char **split(char *s, char ch);
char *_getenv(char *s, char **env);
int is_file(char *s);
int find_file(char **file, char *path);

void exit_shell(char **argv, char **argv_main, int stts);

void display_prompt(int is_pipe);
int get_input(char **ptr, size_t *sz, char **argv);
void parse_input(char *s, char **cmd, char ***argv);
void fill_command(char **ptrCmd, char *s, char *mnStr, char **ptrarg);

void clean_strs(char *s1, char *s2, char *s3);
void clean_args(char **argv);

int push(char ***argv, char *s);
void print_args(char **s);
#endif
