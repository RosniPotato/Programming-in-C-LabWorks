#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[10000];
    while (scanf("%s", str) > 0)
    {
        for (int i = 0; i < strlen(str); i++)
        {
            if (i % 2 == 0)
            {
                printf("%c", toupper(str[i]));
            }
            else
                printf("%c", tolower(str[i]));
        }
        printf("");
    }
}