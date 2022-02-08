#include<stdio.h>
int main(){
    int i,j;
    printf("Pattern 1: \n");
    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    i = 0; j = 0;
    printf("\nPattern 2: \n");
    for ( i = 5; i >= 1; i--)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    i = 0; j = 0;
    printf("\nPattern 3: \n");
    for ( i = 5; i >= 1; i--)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    i = 0; j = 0;
    printf("\nPattern 4: \n");
    for ( i = 5; i >= 1; i--)
    {
        for ( j = 5; j >= i; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    i = 0; j = 0;
    printf("\nPattern 5: \n");
    for ( i = 5; i >= 1; i--)
    {
        for ( j = i; j <= 5; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    i = 0; j = 0;
    printf("\nPattern 5: \n");
    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}