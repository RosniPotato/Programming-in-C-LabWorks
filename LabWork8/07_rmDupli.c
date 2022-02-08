#include <stdio.h>
int main()
{
    int i, j, num[10], temp[10];
    printf("Enter Five Numbers: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 1; j < 5; i++)
        {
            if (num[i] != num[j])
            {
                temp[i] = num[i];
            }
        }
    }
    printf("The numbers after removing the duplicates are: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d", temp[i]);
    }

    return 0;
}