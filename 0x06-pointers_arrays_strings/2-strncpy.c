#include "main.h"
#include <stdio.h>

/**
 * _strncpy - string copier
 * _strncpy: copy all of my string
 * @dest: parameter 1
 * @src: parameter 2
 * @n: paramenter 3
 * Return: the concanteted string huh
*/

char *_strncpy(char *dest, char *src, int n)
{
int num = 0, len = 0;
while (src[len++])
len++;
for (num = 0 ; src[num] && num < n ; num++)
dest[num] = src[num];
for (num = len ; num < n ; num++)
dest[num] = '\0';
return (dest);
}

