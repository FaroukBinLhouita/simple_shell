#include "shell.h"
/**
 */
void exe_env(char *env)
{
	extern char **environ;
	int i = 0;
	if (strcmp(env, "env") == 0)
	{
		while(environ[i])
		{
			env = environ[i];
			printf("%s\n", env);
			i++;
		}
	}
}
