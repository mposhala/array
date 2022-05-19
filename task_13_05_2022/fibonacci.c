#include <stdio.h>
// function to find fibonacci
int fib(int fir_num, int sec_num, int len, int array[])
{
    
    int fib_num;
    for (int i = 2; i < len; i++)
    {
        fib_num = fir_num + sec_num;
        fir_num = sec_num;
        sec_num = fib_num;
        // printng fibonacci series
        printf("%d ", fib_num);
    }
}
int main()
{
    int i;
    // Initialize array size
    int array[10] ;
    // function calling
    fib(3, 5, 10, array);
}