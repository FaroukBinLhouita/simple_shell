#include "shell.h"

/**
 * print_prompt - prints prompt
 *
 * Return: always void
 */
void print_prompt()
{
char *str = "Farouk&&Badawii$ ";
int len = _strlen(str);
write(1, str, len);
}

/**
* _strlen - counting
* @src: the input
*
* Return: the count
*/
int _strlen(char *src)
{
int count = 0;

while (*src != '\0')
{
count++;
src++;
}
return (count);
}
