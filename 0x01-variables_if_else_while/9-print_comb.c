#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints all possible combinations of single-digit numbers
 * separated by ", ", in ascending order, using putchar with four maximum calls.
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar('0' + num);
if (num < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
