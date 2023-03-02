#include "main.h"
#include <stdio.h>

/**
 * cap_string- cap cap my words
 * cap_string: capitalize these words
 * @st: parameter used
 * Return: my value
*/

char *cap_string(char *st)
{
	int num = 0;

	while (st[num])
	{
	while (!(st[num] >= 'a' && st[num] <= 'z'))
	num++;
	if (st[num - 1] == ' ' ||
	st[num - 1] == '\t' ||
	st[num - 1] == '\n' ||
	st[num - 1] == ',' ||
	st[num - 1] == ';' ||
	st[num - 1] == '.' ||
	st[num - 1] == '!' ||
	st[num - 1] == '?' ||
	st[num - 1] == '"' ||
	st[num - 1] == '(' ||
	st[num - 1] == ')' ||
	st[num - 1] == '{' ||
	st[num - 1] == '}' ||
	st[num - 1] == 0)
	st[num] -= 32;
	num++;
	}
	return (st);
}


