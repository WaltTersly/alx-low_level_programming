#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print alphabet in lowercase
 *
 * Return : Always 0 (Success)
 */

int main(void)
{
	char lowchr;

	for (lowchr = 'a'; lowchr <= 'z'; lowchr++)
	{
		putchar(lowchr);
		putchar('\n');
	}
	return (0);
}
