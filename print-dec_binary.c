#include "main.h"

/**
* print_dec_binary - prints binary conversion of integer
* @args: list of arguments pointing to integer
*
* Return: length of printed binary value
*/

int print_dec_binary(va_list args)
{
unsigned int a;
unsigned int i = 0;
unsigned int array[32];
unsigned int count = 0;
a = va_arg(args, unsigned int);
if (a == 0)
{
_putchar('0');
return (1);
}
while (a > 0)
{
array[i] = a % 2;
a = a / 2;
i++;
}
i -= 1;
while (array[i])
{
_putchar(array[i] + '0');
i--;
count++;
}
return (count);
}
