#include "main.h"
#include <stdio.h>
#include <ctype.h>

int _islower(int c) {
    if (islower(c)) {
        printf("c = |%c| is lowercase\n", c);
        return 1;
    } else {
        printf("c = |%c| is not lowercase\n", c);
        return 0;
    }
}
