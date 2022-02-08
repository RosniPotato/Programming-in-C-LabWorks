#include <stdio.h>
#include <string.h>
int main()
{
    char name[5][20], tname[20];
    int i, j, round, comp;
    printf("Enter Names: \n");
    for (i = 0; i < 5; i++)
        gets(name[i]);

    for (round = 1; round <= 4; round++)
    {
        for (i = 0; i < 4 - round; i++)
        {
            comp = strcmp(name[i], name[i + 1]);
            if (comp > 0)
            {
                strcpy(tname, name[i]);
                strcpy(name[i], name[i + 1]);
                strcpy(name[i + 1], tname);
            }
        }
    }
    printf("The Names In Dictionary Order Are: \n");
    for (i = 0; i < 5; i++)
    {
        puts(name[i]);
    }

    return 0;
}