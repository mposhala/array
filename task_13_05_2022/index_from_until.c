#include <stdio.h>
// function to the find the max and min array elements
void find_index_range(int array[], int len, int from, int until, int i, int num)
{

    for (i = 0; i < len; i++)
    {
        if (until > array[i] && from < array[i])
        {
            if (num == array[i])
                printf(" Given number is present at index %d .", array[i]);
        }
    }

    if (num != array[i])
    {
        printf("Given element is not present in the range\n");
    }
}
int main()
{
    int i, j, temp;
    int from = 12, until = 18;
    int array[] = {10, 11, 12, 13, 14, 15, 16, 17, 2, 4, 3, 1, 18, 19};
    int num = 17;
    int len = sizeof(array) / sizeof(int);
    find_index_range(array, len, from, until, i, num);
}