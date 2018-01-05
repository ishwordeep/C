#include<stdio.h>
#include<conio.h>
 void main()
 {

     float a,b,sum,sub,mul,div;
     int n;
     printf("\t\t\t\t it's a simple calculator\n");
     printf("1 for addition\n");
     printf("2 for subtraction\n");
     printf("3 for multiplication\n");
     printf("4 for Division\n");
     printf("Enter your choice\n");
     scanf("%d",&n);
     printf("Enter two numbers\n");
     scanf("%f%f",&a,&b);
     switch(n)
     {
         case 1:sum=a+b;
         printf("your sum is %f\n",sum);
         break;
         case 2:sub=a-b;
         printf("your subtraction is %f\n",sub);
         break;
         case 3:mul=a*b;
         printf("your multiplication is %f\n",mul);
         break;
         case 4:div=a/b;
         printf("your division is %f \n",div);
         break;
         default: printf("invalid choice");
     }
     getch();
     }


