#include "main.h"
#include <stdio.h>

/**
 * _strcmp- compare the strings
 * _strcmp: comparison in here
 * @s1: parameter
 * @s2: parameter
 * Return: value of the comparison
*/

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
