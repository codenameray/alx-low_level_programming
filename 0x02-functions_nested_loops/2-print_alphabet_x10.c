#include "holberton.h"
/**
* print_alphabet - prints a - z ten times
*
* Return: Nil
*/
void print_alphabet(void)
{
int i = 0;
char c;
while (i < 10)
{
c = 'a';
while (c < 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
i++;
}
}
