#include "main.h"
/**
  * print_alphabet - prints alphabet in lowercase
  *
  * Return: Always 0 (Success)
  */
void print_alphabet(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		_putchar(chr);
	}

	_putchar('\n');
