/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: is the size of the array
 * @cmp: cmp is a pointer to the function to be used to compare values
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
return (-1);
}
