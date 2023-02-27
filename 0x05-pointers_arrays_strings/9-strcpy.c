#include "main.h"
/**
 * *_strcpy- copy this and you can show me
 * @dest:parameter a
 * @src:parameter b
 * Return: my val val
*/

char *_strcpy(char *dest, char *src)
{
int c;

for (c = 0 ; src[c] != '\0' ; c++)
{
dest[c] = src[c];
}
dest[c++] = '\0';
return (dest);
}
