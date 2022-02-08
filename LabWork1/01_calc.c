#include <stdio.h>
int main()
{
    int a, b;
    printf("Input two Number: ");
    scanf("%d %d", &a, &b);
    printf("Sum =%d \n Diff =%d \n Product =%d\n Division = %d\n Remainder= %d\n", a + b, a - b, a * b, a / b, a % b);
    return 0;
}
