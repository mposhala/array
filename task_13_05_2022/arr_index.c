#include <stdio.h>
// function prototype to find index
int find_index(int array[], int len, int number)
{
    int Index;

    for (int i = 0; i < len; i++)
    {
        if (number == array[i])
        {
            return i;
        }
    }
}

int main()
{
    //array initialization
    int array1[] = {34, 23, 54, 67, 89};
    int array2[] = {54, 14, 34, 56, 98, 76};
    int len1 = sizeof(array1) / sizeof(int);
    int len2 = sizeof(array2) / sizeof(int);
    // initializing the number to find index 
    int number1 = 23;
    int number2 = 56;
    //function call
    printf("Given Number is present at index %d\n",find_index(array1, len1, number1) );
    printf("Given Number is present at index %d\n",find_index(array2, len2, number2));

    return 0;
}
