#include <stdio.h>
#include <string.h>

#define MAX_STRING_SIZE 1024

int substring_count(char *string, char *substring)
{
    int i, j, len1, len2;
    int count = 0;
    int found = 0;

    len1 = strlen(string);
    len2 = strlen(substring);

    for (i = 0; i < len1 - len2 + 1; i++)
    {
        found = 1;
        for (j = 0; j < len2; j++)
        {
            if (string[i + j] != substring[j])
            {
                found = 0;
                break;
            }
        }
        if (found)
        {
            count++;
            i = i + len2 - 1;
        }
    }

    return count;
}
int main()
{
    char string[MAX_STRING_SIZE];
    char substring[MAX_STRING_SIZE];
    int count = 0;

    printf("Enter a string: ");
    gets(string);

    printf("Enter a substring: ");
    gets(substring);

    count = substring_count(string, substring);

    printf("Substring occurrence count is: %d.\n", count);

    return 0;
}
