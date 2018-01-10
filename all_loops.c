#include<stdio.h>
#include<conio.h>
int main()
{
    int cho,n,i;
    printf("1 for for loop\n");
    printf("2 for while loop\n");
    printf("3 for do while loop\n");
    printf("enter your choice");
    scanf("%d",&cho);

    switch(cho)
    {
    case 1:
        printf("enter the value of(which is max value)\n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }

    break;
    case 2:

        printf("enter the value of(which is max value)\n");
        scanf("%d",&n);
        i=1;
        while (i<=n)
        {
            printf("%d\n",i++);
        }
        break;
    case 3:
        printf("enter the value of(which is max value)\n");
        scanf("%d",&n);
        do {
            printf("%d\n",i++);
        }
        while(i<=n);
        break;
    default:
        {
        printf("invalid choice\n");
        }
    }


    getch();
    return(0);
}
