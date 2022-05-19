#include <stdio.h>
//function to assign same value to all array elements 
int assign_same_value(int arr[], int size, int val)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = val;
    }

    // print array
    printf("The array is:");
    printf("[ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
        
    }
    printf("]\n");
    return 0;
}
int main()
{
    int  size =5,val = 2;
    int arr[5];
    //function call
    assign_same_value(arr, size, val);
    return 0;
}
