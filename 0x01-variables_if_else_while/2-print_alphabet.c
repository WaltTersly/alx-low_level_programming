#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char lowch;

	for (lowch = 'a'; lowch <= 'z'; lowch++)
		putchar(lowch);
	putchar('\n');

	return (0);
}
