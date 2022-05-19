#include <stdio.h>
typedef struct IntArrays
{
    int *arr;
    int len;
} IntArrays;
void int_array_print(IntArrays array)
{

    for (int i = 0; i < array.len; i++)
    {
        printf("%d ", array.arr[i]);
    }
}

int find_index(IntArrays array, int number)
{
    for (int i = 0; i < array.len; i++)
    {
        if (number == array.arr[i])
        {
            return i;
        }
    }
}
int *int_array_find_ptr(IntArrays array)
{
    int *ptr = &array.arr[0];
    for (int i = 0; i < array.len; i++)
    {
        printf("%d \n", *(ptr + i));
    }
}
int main()
{
    int number = 92, element;
    int myarray[] = {23, 45, 67, 54, 92, 43, 24, 67};
    int len = sizeof(myarray) / sizeof(int);
    int *myarrays[10] = {
        myarray,
    };
    int myarray_lens[10] = {
        len,
    };
    IntArrays array = {myarray, len};
    IntArrays arrays[10];
    printf("\nArray elements are: ");
    int_array_print(array);
    printf("\n\nGiven number is present at index: %d\n", find_index(array, number));
    printf("\nArray elements using pointers are: ");

    *int_array_find_ptr(array);

    return 0;
}