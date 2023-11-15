#include "shell.h"
char *get_path(char *command)
{
    char *path_of_cmd, *path_token, *delim, *path_var, *path_var_cpy;
    int cmd_len, i, token_len;
    struct stat buff;

    delim = ":";
    path_var = getenv("PATH");
	
    if (path_var)
    {
        path_var_cpy = _strdup(path_var);
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
		_strcat(file_path, "\0");
                if (stat(path_of_cmd, &buff) == 0)
                {
                    free(path_var_cpy);
                    return (path_of_cmd);
                }
                else
                {
                    free(path_of_cmd);
                    path_token = strtok(NULL, delim);
                }
		free(path_var_cpy);
		if (stat(command, &buff) == 0)
		{
			free(path_var_cpy);
			return (path_of_cmd);
		}
		else
		{
			free(path_of_cmd);
			path_token = strtok(NULL, delim);
		}
	    }
	    free(path_var_cpy);
	    if (stat(command, &buff) == 0)
		return (command);
	    return (NULL);
    	}
    }
    return NULL;
}
