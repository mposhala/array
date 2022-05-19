#include <stdio.h>
// function to print thre array in given range
int range(int array[], int len, int min, int max)
{
    printf(" Array elements in given range:");
    for (int i = 0, j = min; i < len && j < max; i++, j++)
    {
        array[i] = j;
        // printing the array in given range
        printf("%d\n", array[i]);
    }
    printf("\n");
}
int step(int array[], int len, int min, int max, int step)
{
    printf("Array elements in given range by using step:");
    for (int i = 0, j = min; i < len && j < max; i++, j += step)
    {
        array[i] = j;
        // printing the array in given range
        printf("%d\n", array[i]);
    }
}
int main()
{
    int array[100], i;
    int len = sizeof(array) / sizeof(int);
    // range function calling
    range(array, len, 11, 33);
    step(array, len, 11, 33, 3);
    return 0;
}