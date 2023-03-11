#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main- main func
 * @argc: par
 * @argv: par
 *Return: val
*/

int main(int argc, char *argv[])
{
	int pos, tot, chan, ax;
	int cons[] = {25, 10, 5, 2, 1};

	pos = tot = chan = ax = 0;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	tot = atoi(argv[1]);

	if (tot <= 0)
	{
		puts("0\n");
		return (0);
	}
	while (cons[pos] != '\0')
	{
		if (tot >= cons[pos])
		{
			ax = (tot / cons[pos]);
			chan += ax;
			tot -= cons[pos] * ax;
		}
	pos++;
	}

	printf("%d\n", chan);
	return (0);
}
