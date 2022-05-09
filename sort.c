#include <stdio.h>
// function to sort the array
void sort(int arr[], int n)
{
    // sort the merged array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
// function to merge two array in
// ascending order
int merge_arr(int arr1[], int arr2[], int newArr[],
              int n1, int n2, int n3)
{
    // copy arr1 to new array
    for (int i = 0; i < n1; ++i)
    {
        newArr[i] = arr1[i];
    }

    // copy arr2 to new array
    for (int i = 0, j = n1; j < n3; ++i, ++j)
    {
        newArr[j] = arr2[i];
    }
    // merge the new array
    sort(newArr, n3);
}
// main function
int main()
{
    // array which should be merged
    int arr1[] = {10, 13, 17, 22, 30};
    int arr2[] = {9, 18, 37, 36, 42};

    // calculate size
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    // size of new array
    int n3 = n1 + n2;

    // create new array
    int newArr[n3];

    merge_arr(arr1, arr2, newArr, n1, n2, n3);
    // display resultant array
    printf("New array = ");
    for (int i = 0; i < n3; i++)
    {
        printf("%d \n", newArr[i]);
    }

    return 0;
}
