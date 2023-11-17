#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>

extern char **environ;

void print_prompt(void);
char *_strcat(char *tmp, char *src);
char *_strcpy(char *tmp, char *src);
int exe_cmd(char *patth, char **argv);
char *_getline(char *line);
char *get_path(char *command);
int _strlen(char *src);
char *_strdup(char *src);
char **_strtok(char *line_buffer);
void exe_env(char *env);
void freeup(char *buf1, char *buf2, char **buf3);
void free_token(int i, char **token, char *token_cpy);

#endif
