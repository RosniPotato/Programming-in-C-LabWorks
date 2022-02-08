#include<stdio.h>
int main()
{
	int data;
	printf("What is your reqirement?\n");
	printf( "1.the given no. of days in years, months and days.\n"
			"2.the given no. of byes in mb, kb and bytes.\n"
			"3.the sum of individual digits from 3-digit num.\n"
			"4.display the result in reverse order from 3-digit num.\n");
	scanf("%d",&data);
	if (data==1)
	{
		int num_days,years,month;
		printf("enter num of days: ");
		scanf("%d",&num_days);
		years=num_days/365;
		month=(num_days-years*365)/30;
		num_days=(num_days-years*365-month*30);
		printf("%d years ,%d months and %d days\n",years,month,num_days);
	
    }
	if (data==2)
	{
	   int bytes,mbytes,kbytes;
	   printf("enter bytes: ");
	   scanf("%d",&bytes);
	   mbytes=bytes/(1024*1024);
	   kbytes=(bytes-mbytes*1024*1024)/1024;
	   bytes=bytes-mbytes*1024*1024-kbytes*1024;
	   printf("mbytes %d, kbytes %d and bytes %d\n",kbytes,mbytes,bytes);
	}
	if (data==3)
	{
		int num,a,b,c,sum;
		printf("enter a three digit number: ");
	    scanf("%d",&num);
	    a=num%10;
	    num=num/10;
	    b=num%10;
	    num=num/10;
	    c=num%10;
 	    num=num/10;
	    sum=a+b+c;
	    printf("the sum of thee digit in number is %d\n",sum);
	}
	if (data==4)
	{
		int num,a,b,c,rev;
		printf("enter a three digit num:");
		scanf("%d",&num);
		a=num%10;
		num=num/10;
		b=num%10;
		num=num/10;
		c=num%10;
		rev=a*100+b*10+c*1;
		printf("the reverse order is %d\n",rev);
	}
	return 0;
}
