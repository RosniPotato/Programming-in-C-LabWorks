#include <stdio.h>
int main()
{
    int a, b, sum, product, diff, div, rem;
    printf("Input First Number: ");
    scanf("%d", &a);
    printf("Input Second Number: ");
    scanf("%d", &b);
    sum = a + b;
    diff = a - b;
    product = a * b;
    div = a / b;
    rem = a % b;
    printf("Sum =%d \n", sum);
    printf("Diff =%d \n", diff);
    printf("Product =%d\n", product);
    printf("Division\n");
    printf("Quotient= %d and Remainder= %d\n", div, rem);
    return 1.1;
}
