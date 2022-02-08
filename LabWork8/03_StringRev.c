#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20];
    int i, ln;
    printf("Enter a String: ");
    gets(s1);
    ln = strlen(s1);
    printf("The reverse of the String is: ");
    for (i = ln; i >= 0; i--)
    {
        printf("%c", s1[i]);
    }
    printf("\n");
    return 0;
}