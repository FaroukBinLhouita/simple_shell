#include "shell.h"

/**
 * _getline - get info from user
 * @line: the user input
 *
 * Return: the user commands
 */
char *_getline(char *line)
{
size_t num_chars = 0;

if (getline(&line, &num_chars, stdin) == -1)
{
perror("Erorr: Reading input");
exit(-1);
}

return (line);
}
