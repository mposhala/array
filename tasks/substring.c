#include <stdio.h>
#include <string.h>
#define true 1
#define false 0
int startswith(char *str, char *substr)
{
    int str_len = strlen(str);
    int substr_len = strlen(substr);
    for (int i = 0; i < substr_len; i++)
    {
        if (str[i] != substr[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[] = "General Knowledge";
    char substr[] = "General";
    if (startswith(str, substr))
        printf("yes, string starts with substring.\n");
    else
        printf("No, string  not start with substring.\n");
    return 0;
}
