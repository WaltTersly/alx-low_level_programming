#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Entry point
  *
  * Return : Always 0 (Success)
  */

int main(void)

{
	char lowchr = 'a';

	for (lowchr = 'a'; lowchr <= 'z'; lowchr++)
	{
		putchar(lowchr);
	}

		putchar('\n');

	return (0);
}
