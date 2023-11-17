#include "shell.h"
/**
 * free_token - free a token
 * @i: int input;
 * @token: char double_pointer
<<<<<<< HEAD
 * @token_cpy: char pointer
=======
 * @token_cpy: double_pointer
>>>>>>> b48d6a49d0404194ceda0e728cd0403208637ea1
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
