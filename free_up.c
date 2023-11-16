#include "shell.h"
/**
 * freeup: free memmory function
 * @buf1: char pointer input
 * @buf2: char pointer input
 * @buf3: char pointer input
 */
void freeup(char *buf1, char *buf2, char **buf3)
{
	free(buf1);
	free(buf2);
	free(buf3);
}
