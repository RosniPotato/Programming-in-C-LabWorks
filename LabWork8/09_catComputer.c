#include <stdio.h>
#include <string.h>
int main()
{
    char s1[10], s2[10], temp1[10], temp2[10];
    int i;
    printf("Enter The string ");
    for (i = 0; i < 7; i++)
    {
        scanf("%c", &s1[i]);
    }
    printf("Provide the character you want to insert ");
    scanf("%c", &s2[1]);
    strncpy(temp1, s1, 1);
    strcat(temp1, s2);
    for (i = 2; i < 7; i++)
    {
        temp2[i] = s1[i];
    }
    strcat(temp1, temp2);
    printf("The resulting string is: ");
    puts(temp1);
    return 0;
}