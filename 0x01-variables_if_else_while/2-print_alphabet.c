#include <stdio.h>
/**
 * main- printing them letters
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
