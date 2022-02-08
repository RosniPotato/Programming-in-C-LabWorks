#include<stdio.h>
int main(){
	int sales,commission,b;
	printf("How much did you made on your sale ?:");
	scanf("%d",&sales);
	if(sales>5000 && sales <= 20000){
		commission = 0.05*sales;
		printf("your commission is %d",commission);
	}
	else if(sales>20000 && sales<50000){
		commission = 0.1*sales;
		printf("your commission is %d",commission);
	}
	else if(sales<5000){
		printf("your commission is 0");
	}
	return 0;
}
