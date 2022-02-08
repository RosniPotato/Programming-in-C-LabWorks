#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20], s2[20];
    printf("Enter any String");
    gets(s1);
    int i = 0;
    while (s1[i])
    {
        for (int j = 1; s1[j]; j++)
        {
            if (s1[i] != s1[j])
            {
                strcpy[s2[i], s1[i]];
            }
        }
        i++;
    }
    for (i = 0; i < strlen(s2); i++)
    {
        printf("%c", s2[i]);
    }

    return 0;
}