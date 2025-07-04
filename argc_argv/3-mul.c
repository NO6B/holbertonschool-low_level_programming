#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers passed as arguments
 * @argc: number of arguments
 * @argv: array of argument strings
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return 1;
    }
    printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
    return 0;
}
