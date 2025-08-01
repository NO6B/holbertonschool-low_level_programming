#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - Takes the math function
 * @s: Operator string
 * Return: Pointer to function or NULL
 */
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {{"+", op_add},{"-", op_sub},{"*", op_mul},{"/", op_div},{"%", op_mod},{0, 0}
    };

    int i = 0;

    while (ops[i].op)
    {
        if (strcmp(ops[i].op, s) == 0)
            return ops[i].f;
        i++;
    }

    return (0);

}
