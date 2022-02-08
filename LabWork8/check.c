#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0, j = 0, n;
    char name[100], temp[100];
    char a;
    printf("Enter a string : ");
    scanf("%s", &name);
    printf("Enter a character you want to insert : ");
    scanf("%s", &a);
    printf("Enter the index position");
    scanf("%d", &n);
    for (i = 0; i <= strlen(name); i++)
    {
        temp[i] = name[j];
        if (i != n)
        {
            temp[i] = name[j];
            j++;
        }
        else if (i == n)
        {
            temp[n] = a;
        }
    }
    // printf("%d",count);
    temp[strlen(name) + 1] = '\0';
    printf("%s", temp);
}