#include <stdio.h>
// function definition
int array_elements(int arr[], int len)
{
    // to print array elements
    printf("\n\narray elements are: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    // To print Array elements in reverse order
    printf("\n\nreverse order elements are: ");

    for (int i = len - 1; i >= 0; i--)
    {
        printf(" %d ", arr[i]);
    }
    return 0;
}
// to find max number in an array
int max_num(int arr[], int len)
{
    int max, max_index;
    // Initialize max  with first element of array.
    max = arr[0];

    // Loop through the array
    for (int i = 0; i < len; i++)
    {
        // Compare elements of array with max
        if (arr[i] > max)
            max = arr[i];
        max_index = i;
    }

    return max;
}
//To find min number in an array
int min_num(int arr[], int len)
{
    int min;
    // Initialize min with first element of array.
    min = arr[0];

    // Loop through the array
    for (int i = 0; i < len; i++)
    {
        // Compare elements of array with min
        if (arr[i] < min)
            min = arr[i];
    }

    return min;
}
// function definition
// to calculate the mean of an array
float mean(int arr[], int len)
{
    float total = 0;
    for (int i = 0; i < len; i++)
    {
        total += arr[i];
    }
    float mean = total / len;
    return mean;
}
int main()
{
    //Array initialization
    int arr1[] = {3, 4, 5, 7, 9, 8};
    int arr2[] = {34, 56, 78, 45, 67};
    // calculate the length of the array
    int len1 = sizeof(arr1) / sizeof(int);
    int len2 = sizeof(arr2) / sizeof(int);
    // function call
    array_elements(arr1, len1);
    array_elements(arr2, len2);
    printf("\n");
   
    // function call to find max and min number

    printf("\nMax number of an array1 is: %d\n", max_num(arr1, len1));
    printf("\nMin number of an array1 is: %d\n", min_num(arr1, len1));
    printf("\nMax number of an array2 is: %d\n", max_num(arr2, len2));
    printf("\nMin number of an array2 is: %d\n", min_num(arr2, len2));
    
    float res1 = mean(arr1, len1);
    float res2 = mean(arr2, len2);
    // function call to calculate mean
    printf("\nThe mean of an array is %.2f\n", res1);
    printf("\nThe mean of an array is %.2f\n", res2);

    return 0;
}