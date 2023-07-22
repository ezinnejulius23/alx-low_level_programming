#include<ctype.h>
/**
* _isdigit - print uppercase letter.
* @c: character to be checked.
* Return: 1 if c is a digit, 0 if otherwise.
*/
int _isdigit(int c)
{
if (isdigit(c))
return (1);
else
return (0);
}
