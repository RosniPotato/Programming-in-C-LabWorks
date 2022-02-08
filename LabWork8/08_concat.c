#include <stdio.h>
#include <string.h>
int main()
{
    char first[20], middle[20], last[20];
    printf("Enter your first name: ");
    gets(first);
    printf("Enter your middle name: ");
    gets(middle);
    printf("Enter your last name: ");
    gets(last);
    strcat(first, middle);
    strcat(first, last);
    printf("Your name after Concatination is: ");
    puts(first);
    return 0;
}