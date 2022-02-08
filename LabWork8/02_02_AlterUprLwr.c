#include <stdio.h>
int main()
{
    char str[20], str2[20];
    printf("Enter Anything: ");
    gets(str);
    printf("Enter Another: ");
    gets(str2);
    printf("In Upper Case: ");
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("%s", str);
    printf("\nIn Lower Case: ");
    for (int i = 0; str2[i]; i++)
    {
        if (str2[i] >= 'A' && str2[i] <= 'Z')
        {
            str2[i] = str2[i] + 32;
        }
    }
    printf("%s", str2);
    printf("\n");

    return 0;
}