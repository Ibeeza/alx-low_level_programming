#include <stdio.h>
/**
 * main- the puchar function
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int put;

	for (put = 0 ; put < 10 ; put++)
	{
		putchar((put % 10) + '0');
	}
	putchar('\n');
	return (0);
}
