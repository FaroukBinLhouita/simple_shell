#include "shell.h"

/**
 * _strdup - make a copy
 * @tmp: char pointer
 * @src: char pointer
 * Return: oringinal_dest
 */
char *_strdup(char *tmp, char *src)
{
size_t size, i;

size = _strlen(src);
tmp = malloc(sizeof(char) * (size + 1));
if (tmp == NULL)
{
    perror("tsh: memory allocation error");
    return (NULL);
}

for(i = 0; i <= size; i++)
tmp[i] = src[i];

return (tmp);
}
