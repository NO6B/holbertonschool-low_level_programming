#include <stdio.h>
int main(int argc, char *argv[])
/**
 * main - Prints the program name
 * @argc: argument count
 * @argv: argument vector
 * @i: argument
 * Return: 0 on success
 */
{
    int i;
    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return 0;
}