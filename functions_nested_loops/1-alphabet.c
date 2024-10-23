#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
void printAlphabet() 
{
write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
printAlphabet();
return (0);
}
