#include <stdio.h>
int absolute(int num)
{
    if (num > 0)
    {
        // if num is greater than 0 then it will be multiplied by 1
        num = (1) * num;
    }
    else
    {
        // if num is less than 0 then it will be multiplied by -1
        return (num * (-1));
    }
}
int main()
{
    int num = -23;
    // function call
    printf("absolute num is %d\n", absolute(num));
}