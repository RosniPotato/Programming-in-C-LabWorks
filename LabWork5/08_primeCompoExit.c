#include <stdio.h>
int main()
{
    int choice;
    int start,j,end,count;
    printf("What do you want to be printed?\n");
    printf("1. Prime numbers\n2. Composite numbers\n3. Exit the Program\n>>> ");
    scanf("%d",&choice);
    if(choice==3)
    {   
        goto endofprogram;
    }
    else if (choice==1 || choice==2)
    {
        printf("Enter the Starting number\n>>> ");
        scanf("%d",&start);(start==1 || start==0 || start<0)?start=1:start;
        printf("Enter the Ending number\n>>> ");
        scanf("%d",&end);
 
        for (start=start;start<=end;start++)             //1-9 // 
        {
            for (j=1;j<=start;j++)                       //1 //2
            {
                   if (start%j==0)
                   {count=count+1;}
                   if (count>2)
                   {
                       break;
                   }
            }
            if (count==2 && choice==1)
            {
                printf("%d\n",start);
            }
            else if (count>2 && choice==2)
            {
                printf("%d\n",start);
            }
            count=0;
        }
    }
    else
        {printf("Error! Enter a vaild option\n");}
    endofprogram:
    printf("GoodBye\n");
    return 0;
}
