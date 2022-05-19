#include <stdio.h>
int check_num(int n)
{
    int i, count=0;
    if (n >= 0)
    {
        printf("\n%d is a positive number.\n", n);
    }
    else
    {
        printf("\n%d is a negative number.\n", n);
    }
    if (n % 2 == 0)
    {
        printf("\n%d is a even number.\n", n);
    }
    else
    {
        printf("\n%d is odd number.\n", n);
    }
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
        if (count == 2)
            printf(" \n%d  is prime number\n", n);

        else
            printf("\n %d not  prime number\n", n);
    
}

int main()
{
    int n1 = 3;
    int n2 = -23;
    check_num(n1);
    check_num(n2);
    
}