#include "main.h"

/**
 *  * _isalpha - Check Holberton
 *   * @c: An input character
 *    * Description: function returns 1 if the character is a
 *     * letter, lowercase or uppercase.
 *      * Return: 1 or 0 in otherwise.
 *       */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = start;
		s++;
	}
	return (NULL);
}
