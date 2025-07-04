#include <stdio.h>
int main(int argc, char *argv[])
/**
 * main - prints all arguments
 * @argc: number of arguments
 * @argv: array of argument strings
 * Return: 0 on success
 */
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
