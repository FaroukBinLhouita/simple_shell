#include "shell.h"

/**
 * _strdup - make a copy
 * @tmp: char pointer
 * @src: char pointer
 * Return: oringinal_dest
 */
char *_strdup(char *tmp, char *src)
{
int size = 0;

while (*src != '\0')
{
    size++;
}

tmp = malloc(sizeof(char) * (size + 1));

if (tmp == NULL)
{
    perror("tsh: memory allocation error");
    return (-1);
}

while (*src != '\0')
{
    *tmp = *src;
    tmp++;
    src++;
}
*tmp = '\0';
return (tmp);
}
