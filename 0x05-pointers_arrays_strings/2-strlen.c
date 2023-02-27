#include "main.h"
/**
 * _strlen - that function
 * _strlen: check my string length won't you
 * @s:paramenter in use
 * Return: the lenght of string
*/

int _strlen(char *s)
{
int w = 0;

while (*s++)
{
w++;
}
return (w);
}

