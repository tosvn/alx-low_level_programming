#include "main.h"

/**
 * _strcnp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 * Return: If strl < str2, the negative difference of the first unmatched chcracters.
 * If str1 == str2, 0.
 * Is str1 > str2, the positive difference of the first unmatched characters.
 *
 */

int _strcnp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);

}
