#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("Size of char: %u bytes\n", (int) sizeof(char));
    printf("Size of int: %u bytes\n", (int) sizeof(int));
    printf("Size of long int: %u bytes\n", (int) sizeof(long int));
    printf("Size of long long int: %u bytes\n", (int) sizeof(long long int));
    printf("Size of float: %u bytes\n", (int) sizeof(float));
    return (0);
}

