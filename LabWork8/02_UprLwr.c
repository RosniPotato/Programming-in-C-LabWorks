#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int i = 0;
    char name1[20], name2[20], lw, up;
    printf("Enter First Name: ");
    gets(name1);
    printf("Enter Second Name: ");
    gets(name2);
    // toupper(name1);
    // tolower(name2);
    printf("First Name in Upper Case: ");
    // char * strdup(const char *__name1);
    // puts(toupper(name1));
    while (name1[i])
    {
        up = name1[i];
        putchar(toupper(up));
        i++;
    }
    printf("\nSecond Name in Lower Case: ");
    // char * strdup(const char *__name1);
    // puts(tolower(name2));
    i = 0;
    while (name2[i])
    {
        lw = name2[i];
        putchar(tolower(lw));
        i++;
    }
    printf("\n");
    return 0;
}