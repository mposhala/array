#include <stdio.h>

// function to find factorial of given number
int factorial(int n)
{
    int fact = 1, i;
    for (i = 2; i <= n; i++)
        fact = fact * i;
    return fact;
}

int main()
{
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
