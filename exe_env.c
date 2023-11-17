#include "shell.h"
/**
 * exe_env - env handler
 * @env: char pointer
 */
void exe_env(char *env)
{
int i = 0;
while (environ[i])
{
env = environ[i];
printf("%s\n", env);
i++;
}
}
