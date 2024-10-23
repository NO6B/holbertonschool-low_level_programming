#include "main.h"
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
}
