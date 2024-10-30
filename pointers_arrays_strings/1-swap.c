#include <stdio.h>
#include <ctype.h>
/**
* swap_int - Swaps the values of two integers
* @a: The first integer to swap
* @b: The second integer to swap
* Description: This function takes pointers to two integers, swaps their
* values, and updates them accordingly.
* Return: void
*/
void swap_int(int *a, int *b)
{
int tmp = *a;
*a=*b;
*b=tmp;
}
