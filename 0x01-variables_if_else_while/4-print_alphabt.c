#include <stdio.h>
/**
 * main- all except e and q
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char incomp;

	for (incomp = 'a' ; incomp <= 'z' ; incomp++)
	{
		if (incomp != 'e' && incomp != 'q')
		{
			putchar(incomp);
		}
	}
	putchar('\n');
	return (0);
}
