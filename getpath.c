#include "shell.h"
char *get_path(char *command)
{
    char *path_of_cmd, *path_token, *delim, *path_var, *path_var_cpy;
    int cmd_len, i, token_len;
    struct stat buff;

    delim = ":";
    path_var_cpy = NULL;
    path_var = getenv("PATH");
    if (path_var)
    {
        path_var_cpy = _strdup(path_var);
   	if (path_var_cpy == NULL)
	{
		perror("Error: path_cpy memory allocation failed");
		return (NULL);
	}
        cmd_len = _strlen(command);
         if (path_var_cpy != NULL && path_var_cpy[0] != '\0')
        {
            path_token = strtok(path_var_cpy, delim);
            for (i = 0; path_token != NULL; i++)
            {
                token_len = _strlen(path_token);
                path_of_cmd = malloc(sizeof(char) * (cmd_len + token_len + 2));
                if (path_of_cmd == NULL)
                {
                    perror("tsh: memory allocation error");
                    return NULL;
                }
                _strcpy(path_of_cmd, path_token);
                _strcat(path_of_cmd, "/");
                _strcat(path_of_cmd, command);
                if (stat(path_of_cmd, &buff) == 0)
                {
                    printf("Found command at: %s\n", path_of_cmd);
                    return path_of_cmd;
                }
                else
                {
                    free(path_of_cmd);
                    path_token = strtok(NULL, delim);
                }
            }
        }
        printf("Command not found in PATH\n");
        return NULL;
    }
    else
    {
        printf("PATH is NULL\n");
    }

    return NULL;
}
