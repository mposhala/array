#include <stdio.h>
int occur_num(int arr[], int count, int key,int len)
{
    
    count = 0;
    for (int i = 0; i < len; i++)
    {
        if (key == arr[i])
        {
            count++;
        }
    }
    printf("occurence is %d\n", count);
}
int main()
{
    int arr[] = {45, 67, 78, 89, 45, 56, 45, 23, 88, 99};
    int len = sizeof(arr) / sizeof(arr[0]);
    int key = 45;
    int count;
    occur_num(arr, count, key,len);
    return 0;
}