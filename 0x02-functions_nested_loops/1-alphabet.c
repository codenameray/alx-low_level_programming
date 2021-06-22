#include "holberton.h"
/**
* main - check the code for ALX School students.
*
* Return: Always 0.
*/
/*function declaration*/
void print_alphabet(void);
int main(void)
{
print_alphabet();
return (0);
}
print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
return;
}
