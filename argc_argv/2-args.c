#include <stdio.h>
/**
 * main - prints all arguments
 * @argc: number of arguments
 * @argv: array of argument strings
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
