#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20], s2[20];
    int ln1, ln2, diff;
    printf("Enter 1st String: ");
    gets(s1);
    ln1 = strlen(s1);
    printf("\nEnter 2nd String: ");
    gets(s2);
    ln2 = strlen(s2);
    diff = ln1 - ln2;
    if (diff < 0)
    {
        diff = (-1) * diff; // this helps to print the absolute value
        printf("\n2nd string is longer than the 1st");
    }
    else
    {
        printf("\n1st string is longer than the 2nd");
    }
    printf("\nThe Difference in characters between 1st and 2nd strings is: %d\n", diff);
    return 0;
}