#include <stdio.h>
/**
 * main - Prints 0 to 100 with FizzBuzz logic
 *
 * Return: 0
 */
int main(int argc, char const *argv[])
{
for (int i = 0; i <= 100; i++)
{
printf("%d \n",i);
if (i %3 == 0)
{
printf("Fizz");
}
else if (i %5 == 0)
{
printf("Buzz");
}
else if (i %3 ==0 || i %5 == 0)
{
printf("FizzBuzz");
}
}     
return 0;
}
