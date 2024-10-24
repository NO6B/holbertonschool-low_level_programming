#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - utilizes on the write function to print
 *                 the alphabet a - z
*/
void print_alphabet(void)
{
write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
}
