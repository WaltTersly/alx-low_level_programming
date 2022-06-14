#include "main.h"

/**
 *  * _strncpy - a function that copys the strings.
 *   * @dest: an input string
 *    * @src: an input string
 *     * @n: an input integer
 *      * Return: A pointer to the resulting string
 *       */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
