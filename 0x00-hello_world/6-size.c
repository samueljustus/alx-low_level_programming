#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always o (success)
 */

int main(void)
{
int intergerType;
float floatType;
char charType;
double doubleType;

/* size of operator is used to evaluate size of variable */
printf("size of int: %1d bytes\n", sizeof(intergerType));
printf("size of float: 1%d bytes\n", sizeof(floatType));
printf("size of char: 1%d byte\n", sizeof(charType));
printf("size of double: 1%d bytes\n", sizeof(doubleType));
return (0);
}
