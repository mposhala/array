#include <stdio.h>
// function prototype
int sumof_digits(int n)
{
    int sum = 0, rem;
    //logic to find the sum of all digits of a number
    for(sum=0;n>0;rem++)
    {
        rem = n % 10;
        sum = rem + sum;
        n = n / 10;
    }
    printf("sum of digits of given number  is : %d\n", sum);
    return 0;
}
int main()
{
    int n = 123;
    sumof_digits(n);//function call
    return 0;
}