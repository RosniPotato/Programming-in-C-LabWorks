#include <stdio.h>

int main()

{

    char firstName[20], address[20];
    int age;
    printf("Enter is your name : ");
    scanf("%s", &firstName);
    printf("Enter is your address : ");
    scanf("%s", &address);
    printf("Enter is your age : ");
    scanf("%d", &age);
    printf("Hello %s form %s, you are %d years old", firstName, address, age);
    return 0;
}
