#include "main.h"

/**
 * _strncat - just two strings to concatenate
 * _strncat: my concancator
 * @dest: parameter string append
 * @src: parameter append string to dest
 * @n: number of bytes used
 * Return: a result to the function
*/

char *_strncat(char *dest, char *src, int n)
{
int start = 0;
int len = 0;

while (dest[start++])
{
len++;
}
for (start = 0 ; src[start] && start < n ; start++)
{
dest[len++] = src[start];
}
return (dest);
}
