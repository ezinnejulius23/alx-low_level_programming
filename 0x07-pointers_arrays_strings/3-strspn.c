#include <string.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String
 * @accept: Substring
 *
 * Return: Number of bytes in string which consists
 * only of bytes from substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int y = strspn(s, accept);

	return (y);
}
