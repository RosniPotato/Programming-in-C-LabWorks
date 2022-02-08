#include <stdio.h>
struct book
{
	char name[20];
	int pages;
	float price;
} p[3];
int main()
{
	int i, a;
	for (i = 0; i < 3; i++)
	{
		printf("Enter name of book :\n");
		scanf("%s", p[i].name);
		printf("Enter number of pages :\n");
		scanf("%d", &p[i].pages);
		printf("Enter price of book :\n");
		scanf("%f", &p[i].price);
	}

	printf("\t\tName\t\tPages\t\tPrice\n");
	for (i = 0; i < 3; i++)
	{
		if (p[i].price >= 350)
		{
			printf("\t\t%s\t\t%d\t\t%0.2f\n", p[i].name, p[i].pages, p[i].price);
		}
	}
}
