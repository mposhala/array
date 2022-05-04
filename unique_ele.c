#include <stdio.h>
#include <stdlib.h>
int uniqueEle(int *array, int n)
{
    int i, j;
    int count = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (array[i] == array[j] && i != j)
                break;
        }
        if (j == n)
        {
            printf("\nunique elements in an array is [%d] : %d \n", count, array[i]);
            count++;
        }
    }
    return 1;
}
int main()
{
    int n = 4, i;
    // initializing array elements
    int array[] = {2, 3, 4, 3};
    printf("\nThe array elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }
    uniqueEle(array, n); // function call
    return 0;
}