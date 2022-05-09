#include <stdio.h>

#include <string.h>

// Implementing the logic in a function

void isPalindrome(char str[])
{

    // Initializing indexes

    int l = 0;

    int n = strlen(str) - 1;

    // Step 4 to keep checking the characters until they are same

    while (n > l)
    {

        if (str[l++] != str[n--])
        {

            printf("%s is not a palindrome string\n", str);

            return;
        }
    }

    printf("%s is a palindrome string\n", str);
}

// Driver program

int main()
{

    isPalindrome("language");
    isPalindrome("dad");
    return 0;
}