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

void print_prompt();
char **_getline(char *line);
char *_strcat(char *tmp, char *src);
char *_strcpy(char *tmp, char *src);
void exe_cmd(char *patth, char **argv);
char *_getline(char *line);
char *get_path(char *command);
int _strlen(char *src);
char *_strdup(char *tmp, char *src);
char **_strtok(char *line_buffer);

#endif
