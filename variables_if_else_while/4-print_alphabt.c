#include <unistd.h>
#include <ctype.h>
#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
write(1, "abcdfghijklmnoprstuvwxyz\n", 25);
return (0);
}
