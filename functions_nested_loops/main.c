#ifndef MAIN_H
#include <unistd.h>

void printAlphabet()
{
write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
}
#endif
