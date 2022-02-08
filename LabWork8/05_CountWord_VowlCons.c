#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    int i, ln, spc, vwl, cnst, digit;
    i = ln = spc = vwl = cnst = digit = 0;
    printf("Enter any String: ");
    gets(name);
    ln = strlen(name);
    for (i = 0; i < ln; i++)
    {
        if (name[i] == ' ')
        {
            spc = spc + 1;
        }
        else if (name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U' || name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            vwl = vwl + 1;
        }
        // else if (name[i] >= '0' && name[i] <= '0');
        // {
        //     digit = digit + 1;
        // }
        else
        {
            cnst = cnst + 1;
        }
    }
    // printf("Digits: %d\n",digit);
    printf("Words: %d\n", spc + 1);
    printf("Spaces: %d\n", spc);
    printf("Vowel: %d\n", vwl);
    printf("Consonant: %d\n", cnst);
    return 0;
}