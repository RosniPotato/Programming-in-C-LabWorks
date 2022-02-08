#include <stdio.h>
#include <string.h>
int main()
{
    char name[5][20], temp[20], i, j, comp;
    printf("Enter 5 Names: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%s", name[i]);
        // gets(name[i]); //--->>Shows Warning But Works!
    }
    printf("The Names You Have Entered are: \n");
    for (i = 0; i < 5; i++)
    {
        puts(name[i]);
    }
    for (i = 0; i < 4; i++) // indicates number of round in rows to be compared,
                            //  here the loop runs upto (n-1)times because we don't compare the same row with itself
                            //  i.e we take reference of one running row and compare with others
    {
        for (j = i + 1; j < 5; j++) // this loop runs from (i+1) to 'n' times because we compare the
                                    //  current row given by first loop with the preceding rows and finally reach upto last given by nesting loop
        {
            comp = strcmp(name[i], name[j]);
            if (comp < 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    printf("Names in Descending Order is: \n");
    for (i = 0; i < 5; i++)
    {
        puts(name[i]);
    }

    return 0;
}