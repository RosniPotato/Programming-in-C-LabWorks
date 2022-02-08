#include <stdio.h>
#include <string.h>

int main()
{
    char s[20], fp[20], in[20], sp[20];
    int i, j = 0, index, n;
    printf("Enter The String : ");
    gets(s);
    printf("Enter The Character : ");
    gets(in);
    printf("Enter The Index No. :");
    scanf("%d", &index);
    n = strlen(s);

    for (i = 0; i < n; i++)
    {
        fp[i] = s[i];
        if (i == index)
        {
            break;
        }
    }
    fp[i] = '\0';

    for (i = 0; i < n; i++)
    {
        if (i >= index)
        {
            sp[j++] = s[i];
        }
    }
    sp[j] = '\0';
    strcat(fp, in);
    strcat(fp, sp);
    puts(fp);
    return 0;
}