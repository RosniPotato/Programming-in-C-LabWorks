//swaping using 3rd variable.
# include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter two number :");
	scanf("%d %d",&a,&b);
	c = a + b;
	b = c - b;
	a = c - a;
	printf("%d %d",a,b); 
	return 0;
}
