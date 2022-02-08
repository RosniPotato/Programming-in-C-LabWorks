#include <stdio.h>
int main()
{
	char std_name[20];
	float percentage;
	int marks_science, marks_nepali, marks_english, marks_computer, marks_history, total, average;
	printf("Enter your name : ");
	scanf("%s", &std_name);
	printf("Enter science marks :");
	scanf("%d", &marks_science);
	printf("Enter nepali marks :");
	scanf("%d", &marks_nepali);
	printf("Enter english marks :");
	scanf("%d", &marks_english);
	printf("Enter computer marks :");
	scanf("%d", &marks_computer);
	printf("Enter history marks :");
	scanf("%d", &marks_history);
	total = marks_science + marks_nepali + marks_english + marks_computer + marks_history;
	percentage = (float)total * 100 / 500; // converting total into float.
	average = total / 5;
	printf("F.M: 100\n");
	printf("P.M: 40\n");
	printf("Total : %d\n", total);
	printf("Percentage : %0.2f%%\n", percentage);
	printf("average : %d\n", average);
	return 0;
}
