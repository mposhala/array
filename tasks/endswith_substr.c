#include <stdio.h>
#include <string.h>
#define true 1
#define false 0
// to check whether the string ends with substring or not
int startswith(char *str, char *substr)
{
    int str_len = strlen(str);
    int substr_len = strlen(substr);
    for (int i = 0; i < substr_len; i++)
    {
        if (str[i+str_len-substr_len] != substr[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[] = "General Knowledge";
    char substr[] = "Knowledge";
    if (startswith(str, substr))
        printf("yes, string ends with substring.\n");
    else
        printf("No, string  not ends with substring.\n");
    return 0;
}
