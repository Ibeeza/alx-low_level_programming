#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _memset- func it
 *@s: par
 *@b: par
 *@n: par
 * Return: val
*/
char *_memset(char *s, char b, unsigned int n)
{
	return memset(s, b, n);
}

