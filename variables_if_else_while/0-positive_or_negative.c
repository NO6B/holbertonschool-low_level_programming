#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

if (n<0)
{
  printf("the number is less than 0: is negative\n");
}

if (n>0)
{
  printf("the number is greater than 0: is positive\n");
}

if (n==0)
{
  printf("the number is 0: is zero\n");
}
 
	return (0);
}
