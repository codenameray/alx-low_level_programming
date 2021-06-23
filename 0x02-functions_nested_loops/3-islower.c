#include "holberton.h"
/**
* _islower - checks if character is lowercase.
* c - parameter type int is the arg of the _islower function 
* Return: Always 0.
*/
int _islower(int c)
{
char lower = 'a';
for (lower = 'a'; lower <= 'z'; lower++)
{
if (c == lower)
{
return (1);
}
}
return (0);
}
