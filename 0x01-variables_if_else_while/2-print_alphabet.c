#include <stdio.h>
#include <stdlib.h>
/**
 * main - print alphabet in lowercase
 *
 * return(0)
 */

int main(void)
{
	char strng;

	for (strng = 'a'; strng <= 'z'; strng++)
		putchar(strng);
		putchar('\n');

	return (0);
}
