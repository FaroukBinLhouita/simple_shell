#include "shell.h"

/**
 * _strcpy - make a copy
 * @tmp: char pointer
 * @src: char pointer
 * Return: oringinal_dest
 */
char *_strcpy(char *tmp, char *src)
{
while (*src != '\0')
{
    *tmp = *src;
    tmp++;
    src++;
}
*tmp = '\0';
return (tmp);
}

/**
 * _strcat - make a copy
 * @tmp: char pointer
 * @src: char pointer
 * Return: string
 */
char *_strcat(char *tmp, char *src)
{
    int i, count;

    i = 0;
    count = _strlen(tmp);
    while (*tmp)
    {
        tmp[count] = src[i];
        count++;
        i++;
    }    
    tmp[count] = '\0';
    return (tmp);
}
