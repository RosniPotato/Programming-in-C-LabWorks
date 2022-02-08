#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20];
    printf("Enter The String:");
    gets(s1);
    strrev(s1);
    printf("Ther Reverse of The String is: ");
    puts(s1);
    return 0;
}