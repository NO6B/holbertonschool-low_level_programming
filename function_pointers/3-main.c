#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - point d'entrée
 */
int main(int argc, char *argv[])
{
    int i, j;
    int (*f)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    f = get_op_func(argv[2]);
    if (!f)
    {
        printf("Error\n");
        exit(99);
    }

    i = atoi(argv[1]);
    j = atoi(argv[3]);

    if ((argv[2][0] == '/' || argv[2][0] == '%') && j == 0)
    {
        printf("Error\n");
        exit(100);
    }

    printf("%d\n", f(i, j));
    return 0;
}
