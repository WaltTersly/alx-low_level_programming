#include <stdio.h>

/**
  * main - prints alphabet in reverse
  *
  * Return: zero
  */
int main(void)
{
	char crh;

	for (crh = 'z'; crh >= 'a'; crh--)
		putchar(crh);
	putchar('\n');
	return (0);
}
