#include <stdio.h>
#include <string.h>>
int main()
{
    char s1[20], s2[20];
    printf("Enter The String: ");
    gets(s1);
    strcpy(s2, s1);
    strrev(s1);
    if (strcmp(s1, s2) == 0)
    {
        printf("It's a Palindrome");
    }
    else
        printf("It's not a Palindrome");
    return 0;
}