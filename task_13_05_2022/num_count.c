#include <stdio.h>
int num_count(int arr[], int len)
{
    int even = 0, odd = 0, positive = 0, 
    negative = 0,n,count=0,prime=0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (arr[i] >= 0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
        
    }

    printf("\neven numbers in array: %d\n", even);
    printf("\n odd numbers in array: %d\n", odd);
    printf("\npositive numbers in an array: %d\n", positive);
    printf("\nnegative numbers in an array: %d\n", negative);
    
}

int main()
{
    int even, odd;
    int arr[] = {2, 4, -5, 6, -8, 3, 7, 9, 10};
    int len = sizeof(arr) / sizeof(int);
    num_count(arr, len);//function call
}