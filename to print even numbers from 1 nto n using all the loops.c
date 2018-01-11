#include<stdio.h>
#include<conio.h>
 int main()
 {
     int choice,n,i=1;

    printf("1 to go with for loop\n");
    printf("2 to go with while loop\n");
    printf("3 to go with do while loop\n");
    printf("enter your choice\t");
    scanf("%d",&choice);
    printf("Input the value of n\t");
    scanf("%d",&n);
switch(choice)
{
case 1:
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {printf("%d\n",i);}
        }
        break;
case 2:
    while(i<=n)
    {
       if(i%2==0)
        {printf("%d\n",i);}
        i=i+1;
        }
        break;
case 3:
    do
    {
        if(i%2==0)
        {printf("%d\n",i);}
        i=i+1;
    }
    while(i<=n);
    break;
default: printf("invalid choice");
}
getch();
return(0);
 }
