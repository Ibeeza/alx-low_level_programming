#include <stdio.h>
/**
 * main- reversing my abc
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char cba;

	for (cba = 'z' ; cba >= 'a' ; cba--)
	{
		putchar(cba);
	}
	putchar('\n');
}
