#include <stdio.h>
/**
 * main - A program that prints the size of varios computer types
 * Return 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long d;
float f;
printf("Size of a char: %lu byte(s)\n" , (unsigned long)sizeof(a));
printf("Size of a int: %lu byte(s)\n" , (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n" , (unsigned long)sizeof(c));
printf("Size of a long long: %lu byte(s)\n" , (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n" , (unsigned long)sizeof(f));
return (0);
}

