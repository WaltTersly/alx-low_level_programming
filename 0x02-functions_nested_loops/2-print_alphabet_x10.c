#include "main.h"
/**
  * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
  * new line
  */
void print_alphabet_x10(void)
{
	char chr;
	int intvrs;

	intvrs = 0;

	while (intvrs < 10)
	{
		chr = 'a';
		while (chr <= 'z')
		{
			_putchar(chr);
			chr++;
		}
		_putchar('\n');
		intvrs++;
	}
}
