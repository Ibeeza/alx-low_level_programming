#include "main.h"
/**
 * _strlen: check my string length won't you
 * @s:paramenter in use
 * Return- the lenght of string
*/

int _strlen(char *s)
{
int w = 0;

while (*s != '\0')
{
w++;
s++;
}
return (w);
}
