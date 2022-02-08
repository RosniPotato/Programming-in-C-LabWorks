#include <stdio.h>
int main()
{
	char std_name[10];
	int math, computer;
	printf("Enter your name: ");
	scanf("%s", &std_name);
	printf("Enter math marks: ");
	scanf("%d", &math);
	printf("Enter computer marks : ");
	scanf("%d", &computer);
	(math >= 70 && computer >= 80) ? printf("%s Congratulation you are qualified", std_name) : printf("Sorry you are not qualified", std_name);
	return 0;
}
