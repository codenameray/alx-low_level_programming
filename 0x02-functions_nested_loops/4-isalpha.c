#include "holberton.h"
/**
* _isalpha - checks for alphabetic character
* @c: parameter or argument of type int
*
* Return 1 if Successful
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
