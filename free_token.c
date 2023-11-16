#include "shell.h"
/**
 * free_token - free a token
 * @i: int input;
 * @token: char double_pointer
 */
void free_token(int i, char **token, char *token_cpy)
{
int j;

perror("Error: memory allocation  failuer due _strtok");
for (j = 0; j < i; j++)
{
free(token[j]);
}

free(token_cpy);
free(token);
}
