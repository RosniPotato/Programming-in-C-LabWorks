#include <stdio.h>
int main()
{
	char name[10];
	int semester, reg_no, batch, fee_1, fee_2;
	printf("Enter your First name: ");
	scanf("%[^\n]", name);
	printf("Enter your Semester: ");
	scanf("%d", &semester);
	printf("Enter your Reg_no: ");
	scanf("%d", &reg_no);
	printf("Enter your Batch: ");
	scanf("%d", &batch);
	printf("Enter your Semester fee: ");
	scanf("%d", &fee_1);
	printf("Enter your transportation: ");
	scanf("%d", &fee_2);
	printf("\t\t\t\t\tGandaki College Of Engineering And Science \n");
	printf("\t\t\t\t\t\t\tLamachour,Pokhara \n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\tDate:May 30th 2021\n");
	printf("Name:%s\t\t\t\t\t\t\t\t\t\t\tRegd.no:%d \n", name, reg_no);
	printf("Batch:%d\t\t\t\t\t\t\t\t\t\t\t\t\tSemester:%d \n", batch, semester);
	printf("S.N    Description                         Charge                       Remarks\n");
	printf("1.     Semester fee                         Rs:%d                         Paid\n", fee_1);
	printf("2.     Transportation                       Rs:%d                         Paid\n", fee_2);
	printf("                                           Total:%d\n", fee_1 + fee_2);
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tThank You.\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tRecieved By:Finance department.\n");
	return 0;
}
